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
	while (T--) {
		int n , k;
		cin >> n;
		vector<int> data(n);
		for(int i = 0; i < n; ++i) {
			cin >> data[i];
		}
		cin >> k;

		int not_found = true;

		int left = 0, right = n - 1;
		while (left < right) {
			int m = data[left] + data[right];
			if (m < k) {
				++left;
			} else if (m > k) {
				--right;
			} else {
				cout << data[left] << " " << data[right] << " " << k << endl;
				++left;
				--right;
				not_found = false;
			}
		}
		if (not_found) {
			cout << "-1" << endl;
		}
 	}
	return 0;
}
	
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n , k;
		cin >> n;
		vector<int> data(n);
		for(int i = 0; i < n; ++i) {
			cin >> data[i];
		}
		cin >> k;

		int not_found = true;

		int left = 0, right = n - 1;
		while (left < right) {
			int m = data[left] + data[right];
			if (m < k) {
				++left;
			} else if (m > k) {
				--right;
			} else {
				cout << data[left] << " " << data[right] << " " << k << endl;
				++left;
				--right;
				not_found = false;
			}
		}
		if (not_found) {
			cout << "-1" << endl;
		}
 	}
	return 0;
}