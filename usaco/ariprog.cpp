/*
ID: fromod1
PROG: ariprog
LANG: C++
*/

#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#include <fstream>
#include <vector>
#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <set>
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
	ifstream fin;
	ofstream fout;
	fin.open("ariprog.in");
	fout.open("ariprog.out");

	ll N, M;
	fin >> N >> M;

	ll max_value = 0;

	unordered_set<ll> bisquares;
	bool sqValue[125001] = {};
	vector<ll> uniqueValue;
	for(int i = 0; i <= M; ++i) {
		for(int j = i; j <= M; ++j) {
			ll val = i * i + j * j;
			bisquares.insert(val);
			max_value = max(max_value, val);
			if (!sqValue[val]) uniqueValue.push_back(val);
			sqValue[val] = true;
		}
	}

	sort(uniqueValue.begin(), uniqueValue.end());

	vector<pair<int, int> > response;
	for(int i = 0; i < uniqueValue.size(); ++i) {
		for(int j = i + 1; j < uniqueValue.size(); ++j) {
			ll reason = uniqueValue[j] - uniqueValue[i];
			ll cpt = 1, term = uniqueValue[j];
			while(term < 125001 && sqValue[term] && cpt < N) {
				term += reason;
				++cpt;
			}
			if (cpt == N) {
				response.push_back(make_pair(uniqueValue[i], reason));
			}
		}
	}

	sort(response.begin(), response.end(), [](pair<int, int> a, pair<int, int> b) { return a.second < b.second || a.second == b.second && a.first < b.first;});
	if (response.size() == 0) {
		fout << "NONE" << endl;
	} else {
		for(auto item: response) {
			fout << item.first << " " << item.second << endl;
		}
	}

	fin.close();
	fout.close();

	return 0;
}