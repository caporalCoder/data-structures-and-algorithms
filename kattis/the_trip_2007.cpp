#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <stack>
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <chrono>
#include <utility>
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

int main() {
	int n;
	while(cin >> n) {
		if (n == 0) break;
		vector<int> data(n);
		for(int i = 0; i < n; ++i) {
			cin >> data[i];
		}

		sort(data.begin(), data.end());


		int maxNonFit = 0;
		int j;
		for(int i = 0; i < n; ) {
			for (j = i; j < n; ++j) {
				if(data[i] != data[j]) break;
			}
			maxNonFit = max(maxNonFit, j - i);
			i = j;
		}

		cout << maxNonFit << endl;
		vector<vector<int> > pr(maxNonFit, vector<int>());

		for(int i = 0; i < n; ++i) {
			pr[i % maxNonFit].push_back(data[i]);
		}

		for(int i = 0; i < maxNonFit; ++i) {
			for(int c: pr[i]) cout << c << " ";
			cout << endl;
		}


	}
	return 0;
}