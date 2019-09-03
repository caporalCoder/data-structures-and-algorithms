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
	long long T;
	cin >> T;

	vector<bool> is_prime(104744, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i * i <= 104744; i++) {
	    if (is_prime[i]) {
	        for (int j = i * i; j <= 104744; j += i)
	            is_prime[j] = false;
	    }
	}

	unordered_map<long long , long long> mp;
	int pos = 1;
	for(int i = 2; i <= 104744; ++i) {
		if (is_prime[i]) {
			mp[pos++] = i;
		}
	}


	while (T--) {
		long long N;
		cin >> N;

		cout << mp[N] << endl;

	}
	return 0;
}