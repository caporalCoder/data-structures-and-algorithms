/*
ID: fromod1
PROG: milk2
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
	fin.open("milk2.in");
	fout.open("milk2.out");

	int N;
	fin >> N;
	vector<pair<int, int>> times;
	int s, e;
	for(int i = 0; i < N; ++i) {
		fin >> s >> e;
		times.push_back(make_pair(s, e));
	}

	sort(times.begin(), times.end());

	pair<int, int> currentPair = times[0];
	long timeMilkedCow = currentPair.second - currentPair.first;
	long timeNoMilkedCow = 0;

	
	for(int i = 1; i < times.size(); ++i) {
		if (times[i].first <= currentPair.second) {
			currentPair.second = max(currentPair.second, times[i].second);
			if (i == N-1) {
				timeMilkedCow = max(timeMilkedCow, (long) (currentPair.second - currentPair.first));
			}
		} else {
			timeMilkedCow = max(timeMilkedCow, (long) (currentPair.second - currentPair.first));
			timeNoMilkedCow = max(timeNoMilkedCow, (long) (times[i].first - currentPair.second));
			currentPair = times[i];
		}
	}

	//cout << timeMilkedCow << " " << timeNoMilkedCow << endl;
	fout << timeMilkedCow << " " << timeNoMilkedCow << endl;

	fin.close();
	fout.close();


	return 0;
}
