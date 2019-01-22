/*
ID: fromod1
PROG: skidesign
LANG: C++
*/

#include <vector>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cstring>
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
	ifstream fin;
	ofstream fout;
	fin.open("skidesign.in");
	fout.open("skidesign.out");

	ll N;
	fin >> N;

	vector<ll> elevations(N);

	for(ll i = 0; i < N; ++i) {
		fin >> elevations[i];
	}

	sort(elevations.begin(), elevations.end());


	ll cost = inf;

	for(int i = 0; i <= 83; ++i) {
		ll localCost = 0;

		for(ll hill: elevations) {
			if (hill < i) {
				localCost += (i - hill) * (i - hill);
			} else if (hill > i + 17) {
				localCost += (hill - (i + 17)) * (hill - (i + 17));
			} 
		}
		cost = min(cost, localCost);
	}

	cout << cost << endl;
	fout << cost << endl;
	
	fin.close();
	fout.close();


	return 0;
}
