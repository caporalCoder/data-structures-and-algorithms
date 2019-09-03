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
void dfs (vector<int> data, int sum, int& count, int s) {
	if (sum < 0) return ;
	if (sum == 0) ++count;

	for(int i = s; i < data.size(); ++i) {
		dfs(data, sum - data[i], count, i + 1);
	}
}

int countPerfectSum(vector<int> data, int sum) {
	int count = 0;
	dfs(data, sum, count, 0);
	return count;
}

int main() {
	
	std::ios::sync_with_stdio(false);
	int T;
	
	cin>>T;
	
	// cin.ignore(); must be there when using getline(cin, s)
		
	while(T--) {
		int n;
		cin >> n;
		vector<int> data(n);
		for(int i = 0; i < n; ++i) {
			cin >> data[i];
		}

		int sum;
		cin >> sum;

		cout << countPerfectSum(data, sum) << endl;
	}

	return 0;
}