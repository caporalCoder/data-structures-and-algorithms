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

	while(T--) {
		long long N;
		cin >> N;

		long long int fib1 = 2, fib2 = 8; 
	    long long int sum = fib1 + fib2; 

	    while (fib2 <= N) {
	        long long int fib = 4 * fib2 + fib1; 
	        if (fib > N) 
	            break; 
	        fib1 = fib2; 
	        fib2 = fib; 
	        sum += fib2; 
	    } 
	    cout << sum << endl;

	}
	return 0;
}