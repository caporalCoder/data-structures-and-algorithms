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
    std::string s;
    std::cin >> s;
    ll n;
    std::cin >> n;

    ll count = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'a') {
            ++count;
        }
    }

    ll total = count * (n / s.size());
    ll rem = n % s.size();

    for (int i = 0; i < rem; ++i) {
        if (s[i] == 'a') {
            ++total;
        }
    }

    std::cout << total << endl;

    return 0;
}