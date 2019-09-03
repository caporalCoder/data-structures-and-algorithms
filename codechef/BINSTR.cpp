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
	long long N, Q;
	cin >> N >> Q;

	vector<bitset<32> > listBits;

	string bit;
	for(int i = 0 ; i < N; ++i) {
		cin >> bit;
		listBits.push_back(bitset<32>(bit));
	}


	for(int i = 0; i < N; ++i) {
		long long l, r;
		string b;
		cin >> l >> r >> b;

		unsigned long res = 0;

		bitset<32> bs(b);

		for(int j = l; j <= r; ++j) {
       		res = max(res, (listBits[i] ^ bs).to_ulong());
		}
		cout << res << endl;
	}

	return 0;
}