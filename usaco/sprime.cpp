/*
ID: fromod1
PROG: sprime
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

bool isprime(ll n) {
    ll i;

    if (n == 2) {
        return true;
     }

    if (n%2 == 0 || n%3 == 0 || n == 1) {
        return false;
    }

    for (i = 5; i*i <= n; i += 2) {
        if (n%i == 0)
            return false;
    }

    return true;
}

vector<ll> solve(ll N){
    ll i, j;
    if (N == 1) {
        vector<ll> r{2, 3, 5, 7};
        return r;
    }
    vector<ll> pre = solve(N - 1);
    vector<ll> now;
    for (i = 0; i < pre.size(); ++ i)
    {
        for (j = 1; j <= 9; j += 2)
        {
            int num = pre[i] * 10 + j;
            if (isprime(num))
                now.push_back(num);
        }

    }
    return now;

}

int main() {
	ifstream fin;
	ofstream fout;
	fin.open("sprime.in");
	fout.open("sprime.out");
	ll len;
	fin >> len;

	vector<ll> result = solve(len);
    for (ll i = 0; i < result.size(); ++ i) {
	    fout << result[i] << endl;
	}
	
	fout.close();
	fin.close();
	return 0;
}