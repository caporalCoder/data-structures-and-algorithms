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
#include <algorithm>
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
	int T;
	cin >> T;
	while(T--) {
		int amount;
		cin >> amount;
		int n;
		cin >> n;
		vector<int> billed(n);
		for(int i = 0; i < n; ++i) cin >> billed[i];
		
		vector<int> dp(10001, 0);
		for(int i = 0; i <= 10000; ++i) dp[i] = 10000;

		dp[0] = 0;

		sort(billed.begin(), billed.end());

        for (int i = 0; i < n; ++i){
            for (int j=10000; j >= 0; --j) {
                if (j + billed[i] <= 10000 && dp[j+billed[i]] > dp[j]+1){
                    dp[j+billed[i]] = dp[j]+1;
                }
            }
        }
        int i = 0;
        for (i = amount; i <= 10000; i++){
            if (dp[i]!= 10000) break;
        }

       	cout << i << " " << dp[i] << endl;
		
	}
	return 0;
}

