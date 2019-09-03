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
	unsigned long long l, r, k;
	cin >> l >> r >> k;

	long long sum  = 0;
	for(unsigned long long i = l; i <= r; ++i) {
		unordered_set<int> st;

		unsigned long long m = i;
		while(m > 0) {
			st.insert(m % 10);
			m /= 10;
		}
		if (st.size() <=k) sum += i;
	}
	cout << sum << endl;
	return 0;
}