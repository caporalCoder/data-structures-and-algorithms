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

long long numberOfDigits(long long n) { 
    if (n == 1) 
        return 1; 
    // using phi = 1.6180339887498948 
    long double d = (n * log10(1.6180339887498948)) - ((log10(5)) / 2); 
    return ceil(d); 
} 


int main() {
	long long T;
	cin >> T;
	while(T--) {
		long long N;
		cin >> N;
		int i = 1;
		while(true) {
			int m = numberOfDigits(i);
			if (m == N) {
				cout << i << endl;
				break;
			}
			++i;
		}

	}
	return 0;
}