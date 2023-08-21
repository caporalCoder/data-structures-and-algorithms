#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<int>> lefts, rights, up, down;

void precompute() {
    lefts.assign(n, vector<int>(m, 0));
    rights.assign(n, vector<int>(m, 0));
    up.assign(n, vector<int>(m, 0));
    down.assign(n, vector<int>(m, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 'G') {
                lefts[i][j] = (j > 0 ? lefts[i][j-1] : 0) + 1;
                up[i][j] = (i > 0 ? up[i-1][j] : 0) + 1;
            }
        }
    }

    for (int i = n-1; i >= 0; --i) {
        for (int j = m-1; j >= 0; --j) {
            if (grid[i][j] == 'G') {
                rights[i][j] = (j < m-1 ? rights[i][j+1] : 0) + 1;
                down[i][j] = (i < n-1 ? down[i+1][j] : 0) + 1;
            }
        }
    }
}

bool overlap(int x1, int y1, int s1, int x2, int y2, int s2) {
    return (x1-s1 <= x2 && x2 <= x1+s1 && y1 == y2) ||
           (x1 == x2 && y1-s1 <= y2 && y2 <= y1+s1) ||
           (x2-s2 <= x1 && x1 <= x2+s2 && y1 == y2) ||
           (x1 == x2 && y2-s2 <= y1 && y1 <= y2+s2);
}

int twoPluses() {
    precompute();

    int result = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int s1 = 0; s1 < min({lefts[i][j], rights[i][j], up[i][j], down[i][j]}); ++s1) {
                for (int x = 0; x < n; ++x) {
                    for (int y = 0; y < m; ++y) {
                        int s2 = min({lefts[x][y], rights[x][y], up[x][y], down[x][y]}) - 1;
                        while (s2 > 0 && (overlap(i, j, s1, x, y, s2) ||
                               s1 && overlap(i, j, s1-1, x, y, s2) ||
                               s2 && overlap(i, j, s1, x, y, s2-1))) {
                            s2--;
                        }
                        result = max(result, (4*s1+1) * (4*s2+1));
                    }
                }
            }
        }
    }

    return result;
}

int main() {
    cin >> n >> m;

    grid.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    cout << twoPluses() << endl;
   
