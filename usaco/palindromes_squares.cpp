/*
ID: fromod1
PROG: palsquare
LANG: C++
*/

#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <iostream>
#include <fstream>
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

string convertDecimalToBase(int n, int base) {
	string result = "";
	while (n >= base) {
		int k = n % base;
		if (k < 10) {
			result = to_string(n % base) + result;
		} else {
			result = string(1, (char) 65 + k - 10) + result;
		}
	
		n /= base;
	}
	if (n != 0) {
		if (n < 10) {
			result = to_string(n ) + result;
		} else {
			result = string(1, (char) 65 + n - 10) + result;
		}
	}
	return result;
}

bool isPalindromeStr(string str) {
	return str == string(str.rbegin(), str.rend());
}


int main() {
	ifstream fin;
	ofstream fout;
	fin.open("palsquare.in");
	fout.open("palsquare.out");

	int base;

	fin >>  base;

	for(int i = 1; i <= 300; ++i) {
		string m = convertDecimalToBase(i * i, base);

		if (isPalindromeStr(m) ) {
			fout << convertDecimalToBase(i, base) << " " << m << endl;
		}
	}

	fin.close();
	fout.close();
	return 0;
}