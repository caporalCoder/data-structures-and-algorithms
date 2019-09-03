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

int nod(int n) {
	int res = 1;
	for(int i = 2; i <= sqrt(n); ++i) {
		int k = 0;
		while(n % i == 0) {
			++k;
			n /= 2;
		}
		if (k != 0) {
			res *= (k + 1);
		}
	}
	return res + 2;
}

int main() {

	vector<pair<int, int> > listElem;
	listElem.push_back(make_pair(1, 1));
	int r = 2;
	while (true) {
		int k = listElem.back().first + r;
		int v = nod(k);
		cout << k << "  "<< 	k << endl;;
		listElem.push_back(make_pair(k, v));
		++r;
	}


	long long N;
	cin >> N;

	for(int i = 0; i < N; ++i) {
		int k;
		cin >> k;

		int j = 0;;
		while (j < listElem.size() && listElem[j].second <= k) {
			cout << listElem[j].first << " " << listElem[j].second << endl; 
			++j;
		}
		cout << endl;
		cout << listElem[j].first << endl;
	}


	return 0;
}