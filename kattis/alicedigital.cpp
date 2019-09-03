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

	int T;
	cin >> T;
	while(T--) {
		long long n, m;
		cin >> n >> m;

		vector<long long> A(n);

		for(int i = 0 ; i < n; ++i) {
			cin >> A[i];
		}

		long long maxSum = 0;

		for(int i = 0; i < n; ++i) {

			if (A[i] == m) {
				int j = i - 1;
				long long localSum = A[i];
				while(j >= 0 && A[j] > A[i]) {
					localSum += A[j];
					--j;
				}

				j = i + 1;
				while (j < n  && A[j] > A[i]) {
					localSum += A[j];
					++j;
				}

				maxSum = max(maxSum, localSum);
			}

		}

		cout << maxSum << endl;
	}


	return 0;
}