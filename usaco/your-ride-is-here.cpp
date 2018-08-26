/*
ID: fromod1
PROG: ride
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
#define f first
#define s second
	
using namespace std;

long long productValue(string A) {
	long long prod = 1;
	for(char c: A) {
		prod *= ((c - 'A') + 1);
	}
	return prod;
}

int main() {
	ifstream fin;
	ofstream fout;
	fin.open("ride.in");
	fout.open("ride.out");

	string group, comet;

	fin >> group >> comet;

	string res = ((productValue(group) % 47) == (productValue(comet) % 47)) ? "GO" : "STAY";
	fout << res << endl;

	return 0;
}
