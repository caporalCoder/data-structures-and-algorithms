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

unsigned long int binomialCoeff(unsigned int n, unsigned int k) { 
    unsigned long int res = 1; 
  
    if (k > n - k) {
        k = n - k; 
    }

    for (int i = 0; i < k; ++i) { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;

		cout << (binomialCoeff(2* N, N) / (N + 1)) % mod << endl;;

	}
	return 0;
}