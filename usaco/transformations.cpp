/*
ID: fromod1
PROG: transform
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

bool transformRotation90(vector<vector<char>> before, vector<vector<char>> after, int N) {
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < N; ++j) {
			if (after[j][N - 1 - i] != before[i][j]) {
				return false;
			}
		}
	}

	return true;
}

bool transformRotation180(vector<vector<char>> before, vector<vector<char>> after, int N) {
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < N; ++j) {
			if (after[N - 1 - i][N - 1 -j] != before[i][j]) {
				return false;
			}
		}
	}
	return true;
}

bool transformRotation270(vector<vector<char>> before, vector<vector<char>> after, int N) {
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < N; ++j) {
			if (after[N - 1 - j][i] != before[i][j]) {
				return false;
			}
		}
	}
	return true;
}

bool transformNoChange(vector<vector<char>> before, vector<vector<char>> after, int N) {
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < N; ++j) {
			if (after[i][j] != before[i][j]) {
				return false;
			}
		}
	}
	return true;
}

bool transformCombinaison(vector<vector<char>> before, vector<vector<char>> after, int N) {

	vector<vector<char>> tmp (N, vector<char>(N));

	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < N; ++j) {
			tmp[j][N - 1 - i] = before[j][i];
		}
	}
	bool c = true;

	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < N; ++j) {
			if (after[j][N - 1 - i] != tmp[i][j]) {
				c = false;
			}
		}
	}

	if (c) {
		return true;
	}
	c = true;
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < N; ++j) {
			if (after[N- 1 - i][N - 1 - j] != tmp[i][j]) {
				c  = false;
			}
		}
	}


	if (c) {
		return true;
	}


	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < N; ++j) {
			if (after[N - 1 - j][i] != tmp[i][j]) {
				return false;
			}
		}
	}


	return true;
}


bool transformReflection(vector<vector<char>> before, vector<vector<char>> after, int N) {
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < N; ++j) {
			if (after[j][N - 1 - i] != before[j][i]) {
				return false;
			}
		}
	}
	return true;
}



int main() {
	ifstream fin;
	ofstream fout;
	fin.open("transform.in");
	fout.open("transform.out");

	int N;
	fin >> N;

	vector<vector<char>> before, after;
	string line;
	for(int i = 0; i < N; ++i) {
		fin >> line;
		vector<char> l;
		for(int j = 0; j < line.size(); ++j) {
			l.push_back(line[j]);
		}
		before.push_back(l);
	}

	for(int i = 0; i < N; ++i) {
		fin >> line;
		vector<char> l;
		for(int j = 0; j < line.size(); ++j) {
			l.push_back(line[j]);
		}
		after.push_back(l);
	}

	if (transformRotation90(before, after, N)) {
		fout << 1 << endl;
	} else if (transformRotation180(before, after, N)) {
		fout << 2 << endl;
	} else if (transformRotation270(before, after, N)) {
		fout << 3 << endl;
	} else if (transformReflection(before, after, N)) {
		fout << 4 << endl;
	} else if (transformCombinaison(before, after, N)) {
		fout << 5 << endl;
	} else if (transformNoChange(before, after, N)) {
		fout <<  6 << endl;
	} else {
		fout << 7 << endl;
	}

	fin.close();
	fout.close();


	return 0;
}
