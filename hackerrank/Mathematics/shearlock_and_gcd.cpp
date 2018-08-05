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

ll gcd(ll a, ll b) {
	if (b == 0) {
		return a;
	}

	return gcd(b, a % b);
}

int main() {
	
	std::ios::sync_with_stdio(false);
	int T;
	
	cin>>T;
	
	// cin.ignore(); must be there when using getline(cin, s)
		
	while(T--) {
		int n;
		cin >> n;
		vll nums(n);

		for(int i = 0; i < n ; ++i) {
			cin >> nums[i];
		}

		ll gcd_val =  nums[0];
		for (int i = 1; i < n ; ++i) {
			gcd_val = gcd(gcd_val, nums[i]);
		}

		if (gcd_val == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
			
	}
	
}