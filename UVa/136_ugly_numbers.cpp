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

long long uglyRankNumber(long long n) {
	unsigned ugly[n]; 
	unsigned i2 = 0, i3 = 0, i5 = 0; 
	unsigned next_multiple_of_2 = 2; 
	unsigned next_multiple_of_3 = 3; 
	unsigned next_multiple_of_5 = 5; 
	unsigned next_ugly = 1; 

	ugly[0] = 1; 
	for (int i = 1; i < n; i++) { 
		next_ugly = min(next_multiple_of_2, min(next_multiple_of_3, next_multiple_of_5)); 
		ugly[i] = next_ugly; 
		if (next_ugly == next_multiple_of_2) { 
			i2 += 1;
			next_multiple_of_2 = ugly[i2]*2; 
		} 
		if (next_ugly == next_multiple_of_3) { 
			i3 += 1;
			next_multiple_of_3 = ugly[i3]*3; 
		} 
		if (next_ugly == next_multiple_of_5) { 
			i5 += 1;
			next_multiple_of_5 = ugly[i5]*5; 
		} 
	} 
	return next_ugly; 
} 

int main() {
	cout << "The 1500'th ugly number is " << uglyRankNumber(1500) << "." << endl;
	return 0;
}