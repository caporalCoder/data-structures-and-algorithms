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


unsigned long long z_function(string s) {
    int n = (int) s.size();
    vector<unsigned long long> z(n, 0);
    for(int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r) {
            z[i] = min ((unsigned long long) r - i + 1, z[i - l]);
        }
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            ++z[i];
        }
        if (i + z[i] - 1 > r) {
            l = i, r = i + z[i] - 1;
        }
    }
    unsigned long long r = n;
    for(int i = 0; i < n; ++i) {
        r += z[i];
    }
    return r;
}

int main() {
	int n;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        string str;
        cin >> str;
       
        cout << z_function(str) << endl;
    }
	return 0;
}