/*
ID: fromod1
PROG: namenum
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

vector<vector<char>> mapping = {{}, {}, {'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}, {'J', 'K', 'L'}, {'M', 'N', 'O'}, {'P', 'R', 'S'},{ 'T', 'U', 'V'}, {'W', 'X', 'Y'}};
unordered_set<string> dictionary;


void findWord(int i, string num, vector<string>& match, string w ) {
	if (i >= num.size()) {
		if (dictionary.count(w)) {
			match.push_back(w);
		}
	}
	for(char c : mapping[num[i] - '0']) {
		findWord(i + 1, num, match, w + string(1, c));
	}
}


int main() {
	ifstream fin;
	ofstream fout;
	fin.open("namenum.in");
	fout.open("namenum.out");

	
	ifstream dic; dic.open("dict.txt");

	string world;
	while(dic >> world) {
		dictionary.insert(world);
	}

	string num;

	fin >> num;

	vector<string> out;

	findWord(0, num, out, "");

	if (out.size() == 0) {
		fout <<"NONE" << endl;
	} else {
		for(string str: out) {
			fout << str << endl;
		}
	}
	

	fin.close();
	fout.close();


	return 0;
}
