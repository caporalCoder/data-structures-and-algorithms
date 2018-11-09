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
#include <numeric>
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

long long gcd(long long a, long long b)  {  
    if (a == 0 || b == 0)  return 0;  
    if (a == b)  return a;  
 
    if (a > b)  return gcd(a-b, b);  
    return gcd(a, b-a);  
 } 
  
 /*
 int lcm(int a, int b)  {  
    return (a*b)/gcd(a, b);  
 }  
*/

 // c++17

int main() {
	long long T;
	cin >> T;
	while(T--) {
		long long N;
		cin >> N;
		long long res = 1;
		for(int i = 2; i <= N; ++i) {
			res = std::lcm(res, i);
		}
		cout << res << endl;
	}
	return 0;
}