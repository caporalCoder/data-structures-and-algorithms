
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

int minimumTime(int n, int ins, int del, int copy) {
	vector<int> dp(n + 1, 0);
	dp[1] = ins;

	for(int i = 2; i <= n; ++i) {
		if (i & 1) {
			dp[i] = min(dp[i - 1] + ins , dp[(i + 1) / 2] + copy + del);
		} else {
			dp[i] = min(dp[i - 1] + ins, dp[i / 2] + copy);
		}
	}
	return dp[n];
}

int main() {
	std::ios::sync_with_stdio(false);
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--) {
		int n;
		cin >> n;
		int ins, del, copy;

		cin >> ins >> del >> copy;

		cout << minimumTime(n, ins, del, copy) << endl;
	}
	return 0;
}
