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

void dfs(vector<vector<int>> matrix, int n, int m, int i, int j, int& count) {
	if (i < 0 || i >= n || j < 0 || j >= m || matrix[i][j] == 0) {
		return;
	}

	++count;
	matrix[i][j] = 0;

	for(int x = -1; x <= 1; ++x) {
		for(int y = -1; y <= 1; ++y) {
			if (x != 0 || y != 0) {
				dfs(matrix, n, m, i + x, j + y, count);
			}
		}
	}
}

int largestRegion(vector<vector<int>> matrix, int n, int m) {
	int maxRegion = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if (matrix[i][j] == 1) {
				int count = 0;
				dfs(matrix, n, m, i, j, count);
				maxRegion = maxRegion > count ? maxRegion : count;
			}
		}
	}
	return maxRegion;
}

int main() {
	
	std::ios::sync_with_stdio(false);
	int T;
	
	cin>>T;
	
	// cin.ignore(); must be there when using getline(cin, s)
		
	while(T--) {
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m));
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				cin >> matrix[i][j];
			}
		}

		cout << largestRegion(matrix, n, m) << endl;
	}

	return 0;
}