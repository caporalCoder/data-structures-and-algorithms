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
using namespace std;

long long dp[1005][1005];

int main() {
    memset(dp,0,sizeof(dp));
    dp[0][0] = 1;
    int m = 1e9+7;
    for(int i=0; i<1000; i++){
        for(int j=0; j<=i; j++){
            if(dp[i][j]){
                dp[i+1][j] = (dp[i+1][j]%m + dp[i][j]*(1LL*(j+1))%m)%m;
                dp[i+1][j+1] = (dp[i+1][j+1] + dp[i][j])%m;
            }
        }
    }
    long long ans[1001];
    memset(ans,0,sizeof(ans));
    for(int i=0; i<=1000; i++){
        for(int j=0; j<=i; j++){
            ans[i]+=dp[i][j];
            ans[i]%=m;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<ans[n-1]<<"\n";
    }
    return 0;
}