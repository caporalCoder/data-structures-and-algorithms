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


void floyd_warshall(vector<vector<long long> >& g, int n) {
	for (int k = 0; k < n; ++k) {
	    for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < n; ++j) {
	            g[i][j] = min(g[i][j], g[i][k] + g[k][j]); 
	        }
	    }
	}
}

int main() {
	long long n, m;
	cin >> n >> m;

	vector<vector<long long> > g(n, vector<long long>(n, INT_MAX));

	long long a, b, c;
	for(int i = 0; i < m; ++i) {
		cin >> a >> b >> c;
		g[a][b] = c;
		g[b][a] = c;
	}

	floyd_warshall(g, n);
	cout << endl;

	 for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < n; ++j) {
	           cout << g[i][j] << " ";
	        }
	        cout << endl;
	    }

	cin >> c;

	long long x, y;
	long long res = INT_MAX;
	for(int i = 0; i < c; ++i) {
		cin >> x >> y;
		res = min(res, g[x][y]);
	}
	cout << res << endl;


	return 0;
}