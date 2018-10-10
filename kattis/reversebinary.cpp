#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
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
	unsigned int N;
	cin >> N;
	unsigned int revN = 0;
	while( N > 0) {
		revN <<= 1;
		if(N & 1) {
			revN |= 1;
		}
		N >>= 1;
	}
	cout << revN << endl;
	return 0;
}