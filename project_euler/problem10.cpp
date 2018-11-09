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

void sieve(vector<bool>& is_prime, long long n) {
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; i++) {
	    if (is_prime[i] && (long long)i * i <= n) {
	        for (int j = i * i; j <= n; j += i)
	            is_prime[j] = false;
	    }
	}
}

int main() {
	std::vector<bool> is_prime(3000000, true);

	sieve(is_prime, 3000000);

	vector<long long> primeNumbers;

	for(long long i = 2; i <= 3000000; ++i) {
		if (is_prime[i]) {
			primeNumbers.push_back(i);
		}
	}

	long long T;
	cin >> T;
	while(T--) {
		long long N;


		cin >> N;
		long long sum = 0;

		int i = 0;

		while(primeNumbers[i] <= N) {
			sum += primeNumbers[i];
			++i;
		}

		cout << sum << endl;
	}
	return 0;
}