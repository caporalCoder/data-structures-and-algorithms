/*
 * autoor : mxt111
 */
 
#include <vector>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <cmath>
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <chrono>
#include <complex>


#define distance(a, b) abs(a - b)
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

// g++ --std=c++14 -o x.o x.cpp


int LCS(string A) {
	int n = A.size();

	vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

	int maxLen = 0;

	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= n; ++j) {
			if(A[i - 1] == A[j - 1] && i != j) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
				maxLen = max(maxLen, dp[i][j]);
			} 
		}
	}
	return maxLen;
}

int main() {
	
	std::ios::sync_with_stdio(false);
	int T;
	
	cin>>T;
	
	string str;
		
	while(T--) {
		cin >> str;
		cout << LCS(str) << endl;

	}

	return 0;
}