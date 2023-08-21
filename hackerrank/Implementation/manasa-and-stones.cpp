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

    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        int a, b;
        std::cin >> a >> b;

        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        int min = a * (n - 1);
        int max = b * (n - 1);

        int diff = b - a;
        if (diff == 0) {
            std::cout << min << endl;
        } else {
            for (int i = min; i <= max; i += diff) {
                std::cout << i << " ";
            }
            std::cout << endl;
        }
    }
    return 0;
}