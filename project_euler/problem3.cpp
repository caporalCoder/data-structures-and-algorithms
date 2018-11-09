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

long long largestPrimeFactor(long long n) {
	long long res = 1;
	for(int i = 2; i <= sqrt(n); ++i) {
		int k = 0;
		while(n % i == 0) {
			++k;
			n /= i;
		}
		if (k != 0) {
			res = i;
		}
	}
	if (n > 1) res = n;
	return res;
}

int main() {
	long long T;
	cin >> T;
	while(T--) {
		long long N;
		cin >> N;
		cout << largestPrimeFactor(N) << endl;

	}
	return 0;
}