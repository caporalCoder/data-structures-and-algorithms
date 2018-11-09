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
	long long A, B, C, D;
	cin >> A >> B >> C >> D;

	long long count = 0;

	for(int w = 1; w <= A; ++w) {
		for(int x = 1; x <= B; ++x) {
			for(int y = 1; y <= C; ++y) {
				for(int z = 1; z <=D; ++z) {
					if (w ^ x ^ y ^ z != 0) {
						++count;
					}
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}