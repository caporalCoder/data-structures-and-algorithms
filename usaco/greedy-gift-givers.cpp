/*
ID: fromod1
PROG: gift1
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
int main() {
	ifstream fin;
	ofstream fout;
	fin.open("gift1.in");
	fout.open("gift1.out");

	int NP;
	fin >>  NP;

	string name;

	unordered_map<string , int> givers;
	vector<string> listOfgivers;

	for(int i = 1; i <= NP; ++i) {
		fin >> name;
		givers[name] = 0;
		listOfgivers.push_back(name);
	}

	for(int i = 1; i <= NP; ++i) {
		fin >> name;

		int amount, ng;

		fin >> amount >> ng;

		if (ng > 0) {
			int splitAmount = amount / ng;

			givers[name] = givers[name] - amount + (amount - splitAmount * ng);

			string friendName;

			for(int j = 1; j <= ng; ++j) {
				fin >> friendName;
				givers[friendName] += splitAmount;
			}
		}
	}

	for(string g: listOfgivers) {
		fout << g << " " << givers[g] << endl;
	}


	return 0;
}
