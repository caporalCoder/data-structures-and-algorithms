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
	int x, y;
	cin >> x >> y;
	if (x > 0) {
		if(y > 0) {
			cout << 1 << endl;
		} else {
			cout << 4 << endl;
		}
	} else {
		if(y > 0) {
			cout << 2 << endl;
		} else {
			cout << 3 << endl;
		}
	}
	return 0;
}