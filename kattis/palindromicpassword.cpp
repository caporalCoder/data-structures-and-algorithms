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

int main() {
	
	std::ios::sync_with_stdio(false);
	int T;
	
	cin>>T;
	
	// cin.ignore(); must be there when using getline(cin, s)
	vector<long long> palSet;
	for(int i = 1; i < 10; ++i) {
		for(int j = 0; j < 10; ++j) {
			for(int k = 0; k < 10; ++k) {
				long long pal = 100000 * i + 10000 * j + 1000 * k + 100 * k + 10 * j + i;
				palSet.push_back(pal);
			}
		}
	}
		
	while(T--) {
		long long  password;
		cin >> password;
		
		long long best = palSet[0];

		for(int i = 0; i < palSet.size(); ++i) {
			if (abs(best - password) > abs(palSet[i] - password)) {
				best = palSet[i];
			}
		}
		cout << best << endl;
	}

	return 0;
}