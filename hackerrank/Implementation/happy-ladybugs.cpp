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

std::string happyLadybugs(std::string b) {
    int underscores = count(b.begin(), b.end(), '_');

    if (underscores == 0) {
        for (int i = 0; i < b.size(); ++i) {
            if ((i == 0 || b[i] != b[i-1]) && (i == b.size()-1 || b[i] != b[i+1])) {
                return "NO";
            }
        }
        return "YES";
    }

    for (char c = 'A'; c <= 'Z'; ++c) {
        int count = std::count(b.begin(), b.end(), c);
        if (count == 1) {
            return "NO";
        }
    }
    return "YES";
}
	
using namespace std;

int main() {
    int g;
    std::cin >> g;

    while(g--) {
        int n;
        std::cin >> n;

        std::string b;
        std::cin >> b;

        std::cout << happyLadybugs(b) << endl;
    }
    return 0;
}