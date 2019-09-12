#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <unordered_map>
#include <map>
#include <algorithm>
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
	long long n, q;
    cin >> n ;
    vector<long long> arr(n);
    for(int i = 0; i < n; ++i) cin >> arr[i];

    sort(arr.begin(), arr.end());

    vector<long long> prefixSum(n);
    prefixSum[0] = arr[0];
    for(int i = 1; i < n; ++i) prefixSum[i] = prefixSum[i - 1] + arr[i];

    cin >> q;
    vector<long long> queries(q);

   
    long long k ;

    
    long long add = 0;
    for(int i = 0; i < q; ++i) {
        cin >> k;
        add += k;

        auto it = lower_bound(arr.begin(), arr.end(), -1 * add);
        long long pos = it - arr.begin();
        
        long long  ab_sum = 0;

        if (pos > 0) {
            ab_sum = abs(prefixSum[pos - 1] + pos * add) + (prefixSum[n -1] - prefixSum[pos - 1]) + (n - pos) * add;
        } else {
            ab_sum = abs(prefixSum[n - 1] + n * add);
        }

        cout << ab_sum << endl;
    }

	return 0;
}