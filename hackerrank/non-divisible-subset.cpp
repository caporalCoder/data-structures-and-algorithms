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
	int n, k;
    std::cin >> n >> k;

    std::vector<int> nums(n);
    std::vector<int> modulos(k);

    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
        ++modulos[nums[i] % k];
    }

    if ((k & 1) == 0) {
        modulos[k/2] = min(1, modulos[k/2]);
    }

    int maxLen = min(1, modulos[0]);

    for(int i = 1; i <= k/2; ++i) {
        maxLen += max(modulos[i], modulos[k - i]);
    }

    cout << maxLen << endl;



	return 0;
}