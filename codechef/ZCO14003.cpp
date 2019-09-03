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
#include <algorithm>
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
	int n;
	cin >> n;
	vector<unsigned long long> data(n);
	for(int i = 0; i < n; ++i) {
		cin >> data[i];
	}

	sort(data.begin(), data.end(), [](unsigned long long& a, unsigned long long& b) { return a > b;});

	unsigned long long result = 0;
	for(int i = 0; i < n; ++i) {
		result = max(result, data[i] * (i + 1));
	}

	cout << result << endl;

	return 0;
}