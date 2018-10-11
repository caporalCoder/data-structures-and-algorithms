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

int main() {
	
	int T;
	cin >> T;
	while(T--) {
		long long N;
		cin >> N;

		long long k = 0;
		long long A = 1;
		long long sum = 0;
		while (k < N) {
			sum += (A % 1000000007);
			A = A + sod(A);

			++k;
		}
		cout << sum % 1000000007 << endl;
	}
	return 0;
}