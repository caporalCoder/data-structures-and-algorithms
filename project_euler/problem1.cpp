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

long long arithmeticSum(long long n) {
	return n * (n + 1) / 2;
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		--N;
		cout << 3 * arithmeticSum(N / 3) + 5 * arithmeticSum(N / 5) - 15 * arithmeticSum(N / 15) << endl;
	}
	return 0;
}