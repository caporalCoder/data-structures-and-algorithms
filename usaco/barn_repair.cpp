/*
ID: fromod1
PROG: barn1
LANG: C++
*/

#include <vector>
#include <fstream>
#include <algorithm>
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


int list[51];
bool cmp(int a, int b){
	return b < a;
}


int main() {
	ifstream fin;
	ofstream fout;
	fin.open("barn1.in");
	fout.open("barn1.out");

	
	int M, S, C, a, b, t = 0;
	fin >> M >> S >> C;

	for(int i = 1; i <= C; i++) {
		fin >> list[i];
	}

	if(C <= M){
		fout << C << endl;
		return 0;
	}

	sort(list + 1, list + C + 1);
	a = list[1];
	b = list[C];

	for(int i = 1; i <= C - 1; i++) {
		list[i] = list[i + 1] - list[i] - 1;
	}

	sort(list + 1, list + C, cmp);

	for(int i = 1; i <= M - 1 && i <= C; i++) {
		t += list[i];
	}

	fout << b + 1 - a - t << endl;

	fin.close();
	fout.close();


	return 0;
}
