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
	long long n, t;
	cin >> n >> t;

	vector<long long> books(n);
	for(int i = 0; i < n; ++i) {
		cin >> books[i];
	}

	long long nbbook = 0;
	long long i = 0;

	long long sum = books[0]; 

	if (sum <= t) nbbook++;

	for(int j = 1; j < n; ++j) {
		sum += books[j];
		if (sum > t) {
			sum -= books[i++];
			while (i < j  && sum >= t) {
				sum -= books[i++];
			} 
		}
		if (sum <= t) {
			nbbook = max(nbbook, j - i + 1);
		}
		
	}
	
	cout << nbbook << endl;
	return 0;
}