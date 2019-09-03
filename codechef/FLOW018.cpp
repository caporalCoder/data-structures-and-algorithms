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
#define max 1000
	
using namespace std;

int multiply(int x, int res[], int res_size) { 
    int carry = 0;  // Initialize carry 
  
    for (int i=0; i<res_size; i++) { 
        int prod = res[i] * x + carry; 
        res[i] = prod % 10;   
  
        carry  = prod/10;     
    } 
    while (carry) { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 

void factorial(int n) {
	int res[max];
	res[0] = 1;
	int res_size = 1;
	for(int i = 2; i <=n; ++i) {
		res_size = multiply(i, res, res_size);
	}

	for(int i = res_size - 1; i >= 0 ; --i) {
		cout << res[i];
	}
	cout << endl;
}



int main() {
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		factorial(N);
	}
	return 0;
}