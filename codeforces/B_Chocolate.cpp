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
	unsigned long long n;
	cin >> n;
	vector<unsigned long long> bar;
	int position;
	for(unsigned long long i = 0; i < n ; ++i) {
		cin >> position;
		if (position == 1) {
			bar.push_back(i);
		}
	}


	unsigned long long count = 0;
	count = (bar.size() == 0) ? 0 : 1;

	for(int i = 1; i < bar.size(); ++i) {
		count *= (bar[i] - bar[i - 1]);
	}

	cout << count << endl;
	return 0;
}