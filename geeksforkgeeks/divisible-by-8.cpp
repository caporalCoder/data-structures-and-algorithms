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
		string N;
		cin >> N;

		unordered_set<char> st(N.begin(), N.end());
		
		bool not_divisible = true;

		for(int i = 104; i < 1000 && not_divisible; i += 8) {
			int m = i;
			while (m > 0) {
				
				if (!st.count(char(m % 10 + '0'))) {
					break;
				}
				m /= 10;
			}
			
			if (m <= 0) {
				cout << N << " " << i << " " << m << endl;
				not_divisible = false;
			}
		}
		
		if (not_divisible) {
			cout << "No" << endl;
		} else {
			cout << "Yes" << endl;
		}
	}
	return 0;
}