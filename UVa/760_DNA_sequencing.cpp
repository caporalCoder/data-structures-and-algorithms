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

set<string> LCS(const string& a, const string& b) {
	int maxLen = 0;
	int n = a.size(), m = b.size();
	vector<vector<int>> longestSuffix(n, vector<int>(m));
	set<string> result;

	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if (a[i] == b[j]) {
				int &current = longestSuffix[i][j];
				current = (i == 0 || j == 0) ? 1 : longestSuffix[i - 1][j - 1] + 1;
				int from = i - current + 1;


				if (current  > maxLen) {
					result.clear();
					result.insert(a.substr(from, current));
					maxLen = current;
				} else {
					result.insert(a.substr(from, current));
				}
			}
		}
	}
	return result;
}

int main() {
	
	std::ios::sync_with_stdio(false);
	string A, B;
	
	while(cin >> A >> B) {
		set<string>  result = LCS(A, B);
		if(result.empty()) {
			cout << "No common sequence." << endl;
		} else {
			for(set<string>::const_iterator it = result.begin(); it != result.end(); ++it) {
				cout << *it << endl;
			}
		}	
		cout << endl;
	}

	return 0;
}