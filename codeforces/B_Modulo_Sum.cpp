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

int main() {
	long long n, m;
	cin >> n >> m;
	vector<long long> occur(m, 0);
	long long a;
	for(long long i = 0; i < n; ++i) {
		cin >> a;
		++occur[a % m];
	}

	if (occur[0] >= 2) {
		cout << "YES" << endl;
	} else {
		long long left = 1, right = m - 1;
		bool isYes = false;
		while (left < right) {
			if (occur[left] == 0) {
				++left;
				continue;
			}

			if (occur[right] == 0) {
				--right;
				continue;
			}

			long long s = left + right;
			if (s % m == 0) {
				isYes = true;
				break;
			} else if (s < m) {
				++left;
			} else {
				--right;
			}
		}
		if (isYes) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}