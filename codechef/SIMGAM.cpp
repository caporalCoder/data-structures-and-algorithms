
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <bitset>
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
#define max 1000
	
using namespace std;

int main() {
	int T;
	cin >> T;

ll n, ci;
	while (T--) {
        

        cin >> n;
        bool chef_begin = true;
        ll chef_coins = 0, c;
        ll tc = 0;
        std::vector<vector<ll>> coins;

        std::priority_queue<std::pair<int, ll>> pq;

        for (int i = 0; i < n; ++i) {
            cin >> ci;
            std::vector<ll> c_v;
            tc +=ci;
            for(int j = 0; j < ci; ++j) {
                cin >>  c;
                c_v.push_back(c);
            }   
            coins.push_back(c_v);
        }
        

        while(tc>0) {
            if (chef_begin) {
                ll max_left = -1, index = -1;
                for(int i = 0; i < coins.size(); ++i) {
                    if (coins[i].size() > 0) {
                        if (max_left < coins[i][0]) {
                            index = i;
                            max_left = coins[i][0];
                        }
                    }
                }
                chef_coins += max_left;
                coins[index].erase(coins[index].begin());
            } else {
                ll max_right = -1, index = -1;
                for(int i = 0; i < coins.size(); ++i) {
                    if (coins[i].size() > 0) {
                        if (max_right < coins[i].back()) {
                            index = i;
                            max_right = coins[i].back();
                        }
                    }
                }
                coins[index].pop_back();
            }
            
            chef_begin = !chef_begin;
            --tc;
        }
        std::cout << chef_coins  << endl;



	}
	return 0;
}