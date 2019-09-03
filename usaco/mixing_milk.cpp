/*
ID: fromod1
PROG: milk
LANG: C++
*/

#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
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
	fin.open("milk.in");
	fout.open("milk.out");

	int N, M;
	fin >> N >> M;

	vector<pair<int, int>> data;
	int p, a;
	for(int i = 0; i < M; ++i) {
		fin >> p >> a ;
		data.push_back(make_pair(p, a));
	}

	sort(data.begin(), data.end());

	int i = 0;
	register int cost = 0;
	while(N > 0) {
		if(data[i].second <= N) {
			N -= data[i].second;
			cost += data[i].second * data[i].first;
			data[i].second = 0;
		} else {
			cost += N * data[i].first;
			N = 0;
		}
		++i;
	}
	//cout << cost << endl;
	fout << cost << endl;
	fin.close();
	fout.close();


	return 0;
}
