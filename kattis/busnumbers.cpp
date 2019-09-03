#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>
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
	int n;
	cin >> n;
	vector<int> number(n);

	for(int i = 0; i < n; ++i) {
		cin >> number[i];
	}

	sort(number.begin(), number.end());

	int i = 0; 
	while (i < number.size()) {
		int j = i;
		while (j < number.size() - 1 && number[j] == number[j + 1] - 1) {
			++j;
		}
		
		if ((j - i) >= 2) {
			cout << number[i] << "-" << number[j] << " ";
		} else {
			cout << number[i] << " ";
		}
		if (j - i == 1) {
			i = j;
		} else {
			i = j + 1;
		}
		
	}
	cout << endl;

	return 0;
}