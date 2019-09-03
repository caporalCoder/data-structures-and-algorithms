/*
ID: fromod1
PROG: friday
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

bool isLeap(int year) {
	if (year % 100 == 0) {
		return year % 400 == 0;
	} else {
		return year % 4 == 0;
	}
}

int main() {
	
	std::ios::sync_with_stdio(false);
	ifstream fin;
	ofstream fout;
	fin.open("friday.in");
	fout.open("friday.out");

	int N;
	fin >> N;

	vector<int> fridayThirteenthCount = {0, 0, 0, 0, 0 ,0 , 0};
	vector<int> monthDay = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int startYears = 1900, endYears = startYears + N - 1;
	int firstDayMonth = 0;
	for(int year = startYears; year <= endYears; ++year) {
		for(int month = 0; month < 12; ++month) {
			
			int k = (firstDayMonth + 12) % 7;
			++fridayThirteenthCount[k];
			int dayCount = 0;
			if (month == 1) {
				if (isLeap(year)) {
					dayCount = monthDay[month] + 1;
				} else {
					dayCount =  monthDay[month];
				}
			} else {
				dayCount =  monthDay[month];
			}
			firstDayMonth = (firstDayMonth + dayCount) % 7;
		}
	}

	fout << fridayThirteenthCount[5] ;
	for(int i = 2; i <= 7; ++i) {
		fout << " " << fridayThirteenthCount[(i + 4) % 7];
	}
	fout << endl;
	return 0;
}