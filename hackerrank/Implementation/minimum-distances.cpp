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
    ll n;
    std::cin >> n;
    vi a(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    unordered_map<int, int> lastSeen;
    int minDist = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (lastSeen.find(a[i]) != lastSeen.end()) {
            minDist = min(minDist, i - lastSeen[a[i]]);
        }
        lastSeen[a[i]] = i;
    }

    if (minDist == INT_MAX) {
        std::cout << -1 << endl;
    } else {
        std::cout << minDist << endl;
    }
    return 0;
}