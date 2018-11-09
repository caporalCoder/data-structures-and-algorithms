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
#define distance(x, y) round(sqrt(pow(x,2) + pow(y, 2)))
#define angleToRad(angle) angle * (M_PI / 180.0)
    
using namespace std;

double PI = M_PI;

int dist(double x, double y) {
    double total = pow(x, 2) + pow(y, 2);
    total = sqrt(total);
    return round(total);
}

int main() {
    

    int T;
    cin >> T;

    while(T--) {
        unsigned n;
        cin >> n;
        double x = 0, y = 0 , angle = 0;
        for(int i= 0 ; i < n ; ++i) {
            string cmd;
            int dist;

            cin >> cmd >> dist;

            if(cmd == "lt") {
                angle += dist;
            } else if(cmd == "rt") {
                angle -= dist;
            }else if(cmd == "fd") {
                x += dist * sin(angleToRad(angle));
                y += dist * cos(angleToRad(angle));
            } else if(cmd == "bk") {
                x -= dist * sin(angleToRad(angle));
                y -= dist * cos(angleToRad(angle));
            }
        }
        cout << dist(x, y) << endl;
    }
}