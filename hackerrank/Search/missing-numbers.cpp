#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <unordered_map>
#include <map>
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
	long long n, m;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> m;
    vector<int> brr(m);
    for(int i = 0; i < m; ++i) {
        cin >> brr[i];
    }

    map<long long, long long> number_occur_arr, number_occur_brr;

    for(int i = 0; i < n; ++i) {
        number_occur_arr[arr[i]]++;
    }

    for(int i = 0; i < m ; ++i) {
        number_occur_brr[brr[i]]++;
    }

    for(auto it: number_occur_brr) {
        if ((it.second - number_occur_arr[it.first]) > 0) {
            cout << it.first << " ";
        }
    }

	return 0;
}