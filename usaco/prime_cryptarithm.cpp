/*
ID: fromod1
PROG: crypt1
LANG: C++
*/

#include <vector>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <unordered_set>
#include <chrono>
#include <complex>
#include <iostream>
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


bool isGood(ll a, ll b, ll c, ll d, ll e, unordered_set<ll> numbers) {
	 ll n1 = 100 * a  + 10 * b + c , n2 = 10 * d + e;

	 ll p1 = n1 * d, p2_p = n1 * e;

	  ll res = n1 * n2;

	 if (res > 9999 || p1 > 999 || p2_p > 999) return false;

	 while (p1 > 0) {
	 	int k = p1 % 10;
	 	if (!numbers.count(k)) return false;
	  	p1 /= 10;
	 }

	 while (p2_p > 0) {
	 	int k = p2_p % 10;
	 	if (!numbers.count(k)) return false;
	 	p2_p /= 10;
	 }


	 while (res > 0) {
	 	int k = res % 10;
	 	if (!numbers.count(k)) return false;
	 	res /= 10;
	 }

	 return true;
}

int main() {
	ifstream fin;
	ofstream fout;
	fin.open("crypt1.in");
	fout.open("crypt1.out");

	ll N;
	fin >> N;

	if (N < 5) {
		fout << 0 << endl;
		return 0;
	}

	vector<ll> numbers(N);

	unordered_set<ll> nb;
	for(ll i = 0;  i < N; ++i) {
		fin >> numbers[i];
		nb.insert(numbers[i]);
	}

	ll cpt = 0;
	for(ll a = 0; a < N; ++a) {
		for(ll b = 0; b < N; ++b) {
			for(ll c = 0; c < N; ++c) {
				for(ll d = 0; d < N; ++d) {
					for(ll e = 0; e < N; ++e) {
						if (isGood(numbers[a], numbers[b], numbers[c], numbers[d], numbers[e], nb)) {
							//cout << numbers[a] << numbers[b] << numbers[c] << endl;
							//cout << numbers[d] << numbers[e] << endl << endl;

							//cout << (100 * numbers[a] + 10 * numbers[b] + numbers[c]) * numbers[d] << endl;
							//cout << (100 * numbers[a] + 10 * numbers[b] + numbers[c]) * numbers[e] << endl;
							//cout << "---------" << endl;
							++cpt;
						}
					}
				}
			}
		}
	}
	
	fout << cpt << endl;
	
	fin.close();
	fout.close();


	return 0;
}
