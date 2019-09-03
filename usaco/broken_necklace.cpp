/*
ID: fromod1
PROG: beads
LANG: C++
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
#include <bits/stdc++.h>
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

int md(int j, int N) {
	while (j < 0) j += N;
	return j % N;
}

int count(int pos, int s, string str, int N) {
	int i, j;
	if (s == 1) {
		j = pos;
	} else {
		j = pos - 1;
	}
	char col = 'w';

	for(i = 0; i < str.size(); ++i, j = md(j + s, N)) {
		if(col == 'w' && str[j] != 'w') col = str[j];
        if(col != 'w' && str[j] != 'w' && str[j] != col) break;
	}
	return i;
}

int main() {
	
	std::ios::sync_with_stdio(false);
	ifstream fin;
	ofstream fout;
	fin.open("beads.in");
	fout.open("beads.out");

	int N;
	fin >> N;

	string strNecklaces;

	fin >> strNecklaces;

	int maxValue = INT_MIN;

	for(int i = 0; i < N; ++i) {
		maxValue = max(maxValue, count(i, -1, strNecklaces, N) + count(i, 1, strNecklaces, N));
	}
	maxValue = min(maxValue, N);
	fout << maxValue << endl;
	return 0;
}