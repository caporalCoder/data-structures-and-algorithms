#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
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
	while (T--) {
        ll N;
        cin >> N;
        std::string weapon;
        std::cin >> weapon;
        std::bitset<10> result(weapon);
        for(int i = 1; i < N; ++i) {
            std::cin >> weapon;
            result ^= std::bitset<10>(weapon);
        }
        std::cout << result.count() << endl; 
	}
	return 0;
}