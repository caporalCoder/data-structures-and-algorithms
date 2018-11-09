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
#define ull unsigned long long
using namespace std;
vector<pair<ull, ull>> result;

void primeFactor(ull N) {
	
	ull cpt = 0;
	while(N % 2 == 0) {
		++cpt;
		N = N / 2;
	}
	if (cpt > 0) result.push_back(make_pair(2, cpt));

	cpt = 0;
	while(N % 3 == 0) {
		++cpt;
		N = N / 3;
	}
	if (cpt > 0) result.push_back(make_pair(3, cpt));


	ull w = 2;
	for(ull i = 5; i <= sqrt(N); i += 2, w = 6 - w) {
		cpt = 0;
		while(N % i == 0) {
			++cpt;
			N = N / i;
		}
		if (cpt > 0) result.push_back(make_pair(i, cpt));
	}

	if (N > 2) {
		result.push_back(make_pair(N, 1));
	}
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	ull T;
	
	cin >> T;
	while(T--) {
		ull N, phi;
		cin >> N >> phi;

		primeFactor(N);

		cout << result.size() << endl;
		for(auto p: result) {
			cout << p.first << " " << p.second << endl;
		}
		result.clear();
	}
	return 0;
}