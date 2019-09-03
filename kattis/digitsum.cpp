#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <string>
#include <stack>
#include <deque>
#include <list>
#include <vector>
#include <iomanip>
#include <numeric>
#include <utility>
#include <functional>

using namespace std;

long long sod(long long n) {
	long long sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

long long tsum(long long n) { 
	int d = n % 10;
  	return n == 0 ? 0 : d * (d - 1) / 2 + d * sod(n / 10) + 10 * tsum(n / 10) + (n / 10) * 45;
} 

int main() {

	int T;
	cin >> T;
	while (T--) {
		long long a , b;
		cin >> a >> b;

		cout << tsum(b + 1) - tsum(a)<< endl;

	}
	
	return 0;
}