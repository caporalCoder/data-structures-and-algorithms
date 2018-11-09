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
	for(int i = 1; i <= T; ++i) {
		
		int N;
		cin >> N;
		int a;
		vector<int> item(N);
		for(int i = 0; i < N; ++i) {
			cin >> item[i];
		}

		bool not_found = true;
		unordered_set<int> st;
		unordered_map<int, int> mp;
		cout << "Case #" << i <<":" << endl;
		for(int i = 1; i < (1 << 20) && not_found; ++i) {
			int sum = 0;
			for(int j = 0; j < 20; ++j) {
				if (i &  (1 << j)) sum += item[j];
			}

			if (st.find(sum) != st.end() && i != mp[sum]) {
				
				for(int j = 0; j < 20; ++j) {
					if (i & (1 << j)) cout << item[j] << " ";
				} 
				cout << endl;
				int k = mp[sum];
				for(int j = 0; j < 20; ++j) {
					if (k & (1 << j)) cout << item[j] << " ";
				} 
				cout << endl;
				not_found = false;
			} else {
				st.insert(sum);
				mp[sum] = i;
			}
		}

		if (not_found) {
			cout << "Impossible" << endl;
		}
	}
	return 0;
}