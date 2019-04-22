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

int main() {
	int t;
	cin >> t;
	while(t--) {
		int R, r, C, c;
		cin >> R >> C;
		vector<vector<int> > grid(R, vector<int>(C));
		for(int i = 0; i < R; ++i) {
			string line; cin >> line;
			for(int j = 0; j < C; ++j) {
				grid[i][j] = int(line[j]) - int('0');
			}
		}

		cin >> r >> c;
		vector<vector<int> > pattern(r, vector<int>(c));
		for(int i = 0; i < r; ++i) {
			string line; cin >> line;
			for(int j = 0; j < c; ++j) {
				pattern[i][j] = int(line[j]) - int('0');
			}
		}

		bool match_pattern = false;

		for(int i = 0; i <= R - r; ++i) {
			for(int j = 0; j <= C - c; ++j) {
				if (grid[i][j] == pattern[0][0]) {
					
					int m = 0, n = 0;
					match_pattern = true;
					while (match_pattern && m < r) {
					   n = 0;
						while (match_pattern && n < c) {
						    match_pattern &= (pattern[m][n] == grid[i + m][j + n]);
							++n;
						}
						++m;
					}
				}
				if (match_pattern) break;
			}
			if (match_pattern) break;
		}
		if (match_pattern) cout << "YES" << endl; else cout << "NO" << endl;
	}
	return 0;
}