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

int factorize(long long n) { 
    int count = 0; 
  

    while (!(n % 2)) { 
        n >>= 1;
        count++; 
    } 

    for (long long i = 3; i <= sqrt(n); i += 2) { 

        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
    } 
    count += (n > 1);
   return count;
} 
  

int main() {
	long long X;

	cin >> X;

	cout << factorize(X) << endl;


	return 0;
}