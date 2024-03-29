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
    int t;
    std::cin >> t;

    while(t--) {
        ll m, n;
        std::cin >> m >> n;
        vll cost(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> cost[i];
        }

        unordered_map<ll, ll> costMap;
        for (int i = 0; i < n; ++i) {
            ll diff = m - cost[i];
            if (costMap.find(diff) != costMap.end()) {
                std::cout << costMap[diff] + 1 << " " << i + 1 << endl;
                break;
            } else {
                costMap[cost[i]] = i;
            }
        }
    }
	
	return 0;
}