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
	string bString;
	cin >> bString;


	ll seenq = 0;
    ll seen0 = 0;
    ll seen1 = 0;

    ll prev = 1;
	ll pow2 = 1;

	long long sum = 0;

	for(char c: bString) {
		if (c == '?') {
			sum = (((sum * 2 % mod) + (seen1 * pow2 % mod)) % mod + (seenq++ * prev) % mod) % mod;
			prev = pow2;
			pow2  = (pow2 * 2) % mod;
		} else if (c == '1') {
			++seen1;
		} else {
			if (seenq > 0) {
				sum = (sum + (seen1 * pow2) % mod + (prev * seenq) % mod) % mod;
			} else {
				sum = (sum + seen1) % mod;
			}
			++seen0;
		}
	}
	cout << sum % mod << endl;
	return 0;
}