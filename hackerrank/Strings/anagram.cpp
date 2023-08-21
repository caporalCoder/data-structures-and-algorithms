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

int make_anagram(const std::string& s) {
    int len = s.size();
    if (len % 2 != 0) {
        return -1;
    }
    
    std::string s1 = s.substr(0, len / 2);
    std::string s2 = s.substr(len / 2);

    std::vector<int> freq1(26, 0), freq2(26, 0);
    for (char c : s1) {
        freq1[c - 'a']++;
    }
    for (char c : s2) {
        freq2[c - 'a']++;
    }

    int count = 0;
    for (int i = 0; i < 26; ++i) {
        if (freq1[i] > freq2[i]) {
            count += freq1[i] - freq2[i];
        }
    }

    return count;
}

int main() {
	int q;
    std::cin >> q;

    while (q--) {
        std::string s;
        std::cin >> s;

        std::cout << make_anagram(s) << endl;
    }

    return 0;
}