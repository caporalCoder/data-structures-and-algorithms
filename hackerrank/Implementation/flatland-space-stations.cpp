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
#include <climits>
#include <fstream>
#include <chrono>
#include <algorithm>
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
    ll n, m;
    std::cin >> n >> m;
    vi c(m);

    for (int i = 0; i < m; ++i) {
        std::cin >> c[i];
    }

    sort(all(c));

    ll maxDist = 0;
    for (int i = 0; i < m - 1; ++i) {
        ll dist = (c[i + 1] - c[i]) / 2;
        if (dist > maxDist) {
            maxDist = dist;
        }
    }

    if (c[0] != 0) {
        ll dist = c[0];
        if (dist > maxDist) {
            maxDist = dist;
        }
    }

    if (c[m - 1] != n - 1) {
        ll dist = n - 1 - c[m - 1];
        if (dist > maxDist) {
            maxDist = dist;
        }
    }

    std::cout << maxDist << endl;
    return 0;
}