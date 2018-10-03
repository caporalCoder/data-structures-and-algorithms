/*
ID: fromod1
PROG: dualpal
LANG: C++
*/

#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <iostream>
#include <list>
#include <fstream>
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
		result = to_string(n % base) + result;
	
		n /= base;
	}
	if (n != 0) {
		result = to_string(n) + result;
	}
	return result;
}

bool isPalindromeStr(string str) {
	return str == string(str.rbegin(), str.rend());
}

int main() {
	ifstream fin;
	ofstream fout;
	fin.open("dualpal.in");
	fout.open("dualpal.out");

	int N, S;
	fin >> N >> S;

	int cpt = 0;
	int start = S + 1;
	while(cpt < N) {
		int nbPalindrome = 0;
		int base = 2;
		while(nbPalindrome <2 && base <= 10) {
			string mm = convertDecimalToBase(start, base);
			if (isPalindromeStr(mm)) {
				++nbPalindrome;
			}
			++base;
		}
		if (nbPalindrome >= 2) {
			//cout << start << endl;
			fout << start << endl;
			++cpt;
		}
		++start;
	}

	fin.close();
	fout.close();
	return 0;
}