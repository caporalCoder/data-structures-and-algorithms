#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <iostream>
#include <fstream>
#include <chrono>
#include <complex>
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

	
using namespace std;

dfs(set<pair<int, int>> st, int& count, pair<int, int> point, vector<pair<int, int>> path) {
	for(int i = -1; i <= 1; ++i) {
		for(int j = -1; j <= 1; ++j) {
			if (i != 0 && j != 0) {
				if (!st.count(make_pair(point.first + i, point.second + j))) return;
				
			}

		}
	}
	
}

int main() {
	int N;
	cin >> N;
	set<pair<int, int>> st;
	int x, y;
	for(int i = 0; i < N; ++i) {
		cin >> x >> y;
		st.insert(make_pair(x, y));
	}

	int count = 0;
	for(pair<int, int> point: st) {
		dfs(st, count, point, {point});
	}

	cout << cout << endl;
	return 0;
}