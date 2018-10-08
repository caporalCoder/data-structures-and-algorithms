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
	
	int i , j;

	while(cin >> i >> j) {
		int i_o = i, j_o = j;
		if (i > j) {
			int tmp = i;
			i = j;
			j = tmp;
		}

		int maxLen = 0;
		

		while (i <= j) {
			int n = i;
			int cycleLen = 1;
			while(n != 1) {
				n = (n & 1) ? 3 * n + 1 : n /2;
				++cycleLen;
			}
			maxLen = max(maxLen, cycleLen);
			++i;
		}
		cout << i_o << " " << j_o << " " << maxLen << endl;
		
	}
	return 0;
}