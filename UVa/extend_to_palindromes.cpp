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
#define base 1000000007LL
#define mod 2096725343LL
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second


using namespace std;


int main() {
	
	std::ios::sync_with_stdio(false);
	int T;
	
	string str;

	while(cin >> str) {
		int n = str.size();
		int l = n - 1;
		long long h1 = 0, h2 = 0, cbase = 1;
		int maxLen = 0;
		for(int i = n - 1; i >= 0; --i) {
			h2 = (h2 * base + str[i]) % mod;
			h1 = (h1 + str[i] * cbase) % mod;
			if (h1 == h2) {
				maxLen = n - i;
			}
			cbase = (cbase * base) % mod;
		}

		cout << str;
		for(int i = (n - maxLen) - 1; i >= 0; --i) {
			cout << str[i];
		}
		cout << endl;
		
	}
	return 0;
}