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
#include <algorithm>
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

bool isPalindrome(string str) {
	return str == string(str.rbegin(), str.rend());
}

int main() {
	long long T;
	cin >> T;
	vector<long long> product;

	for(int i = 100; i <= 999; ++i) {
		for(int j = 100; j <= 999; ++j) {
			long long m = i * j;
			if(isPalindrome(to_string(m))) {
				product.push_back(m);
			}
		}
	}
	sort(product.begin(), product.end());

	while(T--) {
		long long N;
		cin >> N;

		auto it = lower_bound(product.begin(), product.end(), N);
		cout << product[it - product.begin() - 1] << endl;
	}
	return 0;
}