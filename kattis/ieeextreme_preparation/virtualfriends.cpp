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

int find(vector<int>& p, int x) {
    return p[x] < 0 ? x : p[x] = find(p, p[x]);
}

void unio(vector<int>& p, int x, int y) {
    int xp = find(p, x), yp = find(p, y);
    if (xp != yp) {
        if (p[xp] > p[yp]) {
        	xp ^= yp ^= xp ^= yp;
        }
         p[xp] += p[yp];
         p[yp] = xp;
      }
    }

    int ssize(vector<int>& p, int x) {
        return -p[find(p,x)];
    }

int main(){
   
    int n;
    std::cin >> n;
    while(n--){
        int n;
        std::cin >> n;

        
        std::unordered_map<std::string, int> id;
        vector<int> elem(2 * n, -1);
        int next_rel = 0;

        for (int i = 0; i < n; i++) {
            std::string a, b;
            std::cin >> a >> b;
            if (id.find(a) == id.end()) id[a] = next_rel++;
            if (id.find(b) == id.end()) id[b] = next_rel++;

            unio(elem, id[a], id[b]);
            std::cout << ssize(elem, id[a]) << endl;;
        }
    }
    return 0;
}