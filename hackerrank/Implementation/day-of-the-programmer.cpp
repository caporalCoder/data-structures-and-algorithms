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

std::string day_of_programmer(int year) {
    if (year == 1918) {
        return "26.09.1918";
    } else if ((year < 1918 && year % 4 == 0) || (year > 1918 && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)))) {
        return "12.09." + std::to_string(year);
    } else {
        return "13.09." + std::to_string(year);
    }
}

int main() {
    int year;
    std::cin >> year;
    std::cout << day_of_programmer(year) << endl;
    return 0;
}