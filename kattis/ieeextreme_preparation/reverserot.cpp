#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <set>
#include <stack>
#include <queue>
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

int main() {

	int n;
	string str;

	string correspondance = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
	unordered_map<char, int> mp;
	mp['A'] = 0;
	mp['B'] = 1;
	mp['C'] = 2;
	mp['D'] = 3;
	mp['E'] = 4;
	mp['F'] = 5;
	mp['G'] = 6;
	mp['H'] = 7;
	mp['I'] = 8;
	mp['J'] = 9;
	mp['K'] = 10;
	mp['L'] = 11;
	mp['M'] = 12;
	mp['N'] = 13;
	mp['O'] = 14;
	mp['P'] = 15;
	mp['Q'] = 16;
	mp['R'] = 17;
	mp['S'] = 18;
	mp['T'] = 19;
	mp['U'] = 20;
	mp['V'] = 21;
	mp['W'] = 22;
	mp['X'] = 23;
	mp['Y'] = 24;
	mp['Z'] = 25;
	mp['_'] = 26;
	mp['.'] = 27;

	while(cin >> n  && n != 0) {
		cin >> str;
		for(int i = str.size() - 1; i >= 0; --i) {
			cout << correspondance[(mp[str[i]] + n) % 28] ; 
		}
		cout << endl;
	}
	return 0;
}