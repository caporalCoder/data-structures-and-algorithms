
#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#include <vector>
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
#define f first
#define s second

using namespace std;

bool isConvertible(string a, string b, int n, int m) {
	vector<vector<bool> > dp(n + 1, vector<bool>(m + 1, false));

	dp[0][0] = true;

	for(int i = 0; i < n; ++i) {
		for(int j = 0; j <= m; ++j) {
			if (dp[i][j]) {
				if (j < m && toupper(a[i]) == b[j]) {
					dp[i + 1][j + 1] = true;
				}  

				if (!isupper(a[i])) {
					dp[i + 1][j] = true;
				}
			}
		}
	}
	return  dp[n][m];
}
	

int main() {
	std::ios::sync_with_stdio(false);
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--) {
		int n, m;
		cin >> n >> m;
		string a, b;
		cin >> a >> b;

		if (isConvertible(a, b, n, m)) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}
