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

int main() {
	int T;
	cin >> T;

	while(T--) {
		int n;
		vector<int> d;
		while(cin >> n && n != 0) {
			d.push_back(n);
		}

		int maxLocal = d[0];
		int nbImported = 0;
		for(int i = 1; i < d.size(); ++i) {
			if( 2 * maxLocal < d[i]) {
				nbImported += (d[i] - 2 * maxLocal);
			}
			maxLocal = d[i];
		}
		cout << nbImported << endl;

	}
	return 0;
}