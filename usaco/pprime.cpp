/*
ID: fromod1
PROG: pprime
LANG: C++
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#include <set>
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

set<ll> pprimes;

bool is_prime(int n) {
  if (n % 2 == 0)
    return false;

  for (int i = 3;  i * i <= n; i += 2) {
    if (n % i == 0)
      return false;
  }

  return true;
}

void generate_pprimes(int num, int depth, int len) {
  if (depth == (len + 1) / 2) {
    int tmp;
    if (len % 2 == 0) {
      tmp = num;
    } else {
      tmp = num / 10; 
    }

    while (tmp) {
      num = num * 10 + tmp % 10;
      tmp /= 10;
    }

    if (is_prime(num))
      pprimes.insert(num);

    return;
  }

  if (depth == 0) {
    for (int i = 1; i < 10; i += 2)
      generate_pprimes(num * 10 + i, depth + 1, len);
  } else {
    for (int i = 0; i < 10; i++) {
      generate_pprimes(num * 10 + i, depth + 1, len);
    }
  }
}

int main() {
	ifstream fin;
	ofstream fout;
	fin.open("pprime.in");
	fout.open("pprime.out");

	ll a, b;
	fin >> a >> b;

	pprimes.insert(2);
	pprimes.insert(3);
	pprimes.insert(5);
	pprimes.insert(7);
	
	for (int i = 2; i < 9; i++) {
	  generate_pprimes(0, 0, i);
	}
	
	for (ll elem: pprimes ) {
	   if (elem >= a && elem <= b)
	      fout << elem << endl;
	}

	
	
	fout.close();
	fin.close();
	return 0;
}