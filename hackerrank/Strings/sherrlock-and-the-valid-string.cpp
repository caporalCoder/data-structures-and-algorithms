/*
 * autoor : mxt111
 */
 
#include <vector>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <chrono>
#include <complex>


#define distance(a, b) abs(a - b)
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
#define f first
#define s second


using namespace std;

// g++ --std=c++14 -o x.o x.cpp

int main() {
	
	std::ios::sync_with_stdio(false);
	string str;

	cin >> str;

	unordered_map<char, int> mp;

	for(char c: str) {
		++mp[c];
	}

	unordered_map<int, int> occur;


	for(const auto& p: mp) {
		++occur[p.second];
	}

	int cpt = 0;
	for(const auto& p: occur) {
		++cpt;
	}

	cout << cpt << endl;

	if (cpt == 1) {
		cout << "YES" << endl;
	} else if (cpt == 2) {
		const auto& sec = std::next(occur.begin(), 1);

		cout << sec->first  << " " << sec->second << endl;
		cout << occur.begin()->first << " " << occur.begin()->second << endl;
		bool a = abs(occur.begin()->first - sec->first) == 1 && (sec->second == 1 || occur.begin()->second == 1);
		bool b = (sec->second == 1 && sec->first == 1 || occur.begin()->second == 1 && occur.begin()->first == 1);
 		if (a || b) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	} else {
		cout << "NO" << endl;
	}
	return 0;
}