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
    int n , k;
    std::cin >> n >> k;
    vi bill(n);

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> bill[i];
        sum += bill[i];
    }

    int b;
    std::cin >> b;

    int actual = (sum - bill[k]) / 2;
    if (actual == b) {
        std::cout << "Bon Appetit" << endl;
    } else {
        std::cout << b - actual << endl;
    }

    return 0;
}