#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <iostream>
#include <fstream>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back

	
using namespace std;

void explore(vector<vector<int> >& grid, int i , int j, int n, int m, int& res) {
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0) {
        return;
    }
    ++res;
    grid[i][j]= 0;
    for(int x = -1; x <= 1; ++x) {
        for(int y = -1; y <=1; ++y) {
            explore(grid, i + x, j + y, n, m, res);
        }
    }
}

int main() {
	int n, m;
    cin >> n >> m;

    vector<vector<int> > grid(n, vector<int>(m));

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    int res = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if (grid[i][j] == 1) {
                int localRes = 0;
                explore(grid, i, j, n, m, localRes);
                res = max(res, localRes);
            }
        }
    }

    cout << res << endl;

    
	return 0;
}