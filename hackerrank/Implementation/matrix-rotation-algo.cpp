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
	ll n, m, r;
    cin >> n >> m >> r;
    vector<vector<ll> > grid(n, vector<ll>(m));
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    ll k = min(n, m) / 2;


    for(int i = 0; i < k; ++i) {
        vector<ll> circonference;
        for(int j = i; j < m - i - 1; ++j) circonference.push_back(grid[i][j]); 
        for(int j = i; j <= n - i - 1; ++j) circonference.push_back(grid[j][m - i - 1]);
        for(int j = m - i - 2; j >= i; --j) circonference.push_back(grid[n - i - 1][j]);
        for(int j = n - i - 2; j >= i + 1; --j) circonference.push_back(grid[j][i]);

        int g = (int) circonference.size();
        vector<ll> rCirconference(g);
        int r_k = r % g;
       
        for(int h = 0; h < g; ++h) {
            rCirconference[(h -  r_k + g) % g] = circonference[h];
        }
  
        int x = 0;
        for(int j = i; j < m - i - 1; ++j) grid[i][j] = rCirconference[x++];
        for(int j = i; j <= n - i - 1; ++j) grid[j][m - i - 1] = rCirconference[x++];
        for(int j = m - i - 2; j >= i; --j) grid[n - i - 1][j] = rCirconference[x++];
        for(int j = n - i - 2; j >= i + 1; --j) grid[j][i] = rCirconference[x++];

    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout <<  grid[i][j] << " ";
        }
        cout << endl;
    }

	return 0;
}