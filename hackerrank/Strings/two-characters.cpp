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

int alternate(const std::string &s) {
    if (s.size() <= 1) {
        return 1;
    }
    
    std::set<char> unique_chars;
    for(char c : s) {
        unique_chars.insert(c);
    }

    int max_len = 0;

    for(char char1 : unique_chars) {
        for(char char2 : unique_chars) {
            std::vector<char> filtered;
            for(char c : s) {
                if(c == char1 || c == char2) {
                    filtered.push_back(c);
                }
            }

            bool valid = true;
            for(size_t i = 0; i < filtered.size() - 1; i++) {
                if(filtered[i] == filtered[i+1]) {
                    valid = false;
                    break;
                }
            }

            if(valid) {
                max_len = std::max(max_len, static_cast<int>(filtered.size()));
            }
        }
    }

    return max_len;
}

	
using namespace std;

int main() {
	int n;
    std::string s;

    std::cin >> n;
    std::cin >> s;

    std::cout << alternate(s) << endl;
}