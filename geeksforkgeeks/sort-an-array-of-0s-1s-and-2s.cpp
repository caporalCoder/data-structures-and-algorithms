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
		int val;
		vector<int> occur(3, 0);
		for(int i = 0; i < N; ++i) {
			cin >> val;
			++occur[val];
		}
		vector<int> output(N, 0);
		for(int i = occur[0]; i < (occur[0] + occur[1]); ++i) {
			output[i] = 1;
		}

		for(int i = occur[0] + occur[1]; i < N; ++i) {
			output[i] = 2;
		}

		for(int i = 0; i < N; ++i) {
			cout << output[i] << " ";
		}
		cout << endl;
	}
	return 0;
}