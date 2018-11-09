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

long long sod(long long n) {
	long long sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

long long primeFactor(long long n) {
	long long sum = 0;

	for(int i = 2; i <= sqrt(n); ++i) {
		int k = 0;
		while(n % i == 0) {
			++k;
			n /=i;
		}
		if (k != 0) {
			sum += i * k;
		}
	}
	return sum;
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		long n;
		cin >> n;

		cout << int(sod(n) == primeFactor(n)) << endl;

	}
	return 0;
}