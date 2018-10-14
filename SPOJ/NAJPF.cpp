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
	string A, B;

	int T;
	cin >> T;

	vector<vector<int>> matching;
	while(T--) {
		cin >> A >> B;
		vector<int> mtch;

		if (A.size() >= B.size()) {
			for(int i = 0; i <= A.size() - B.size(); ++i) {
				int j = 0;
				while(j < B.size() && i + j < A.size() && A[i + j] == B[j]) {
					++j;
				}
				if (j == B.size()) mtch.push_back(i + 1);
			}
		}
		
		matching.push_back(mtch);

	}

	for(int i = 0; i < matching.size(); ++i) {
		if (matching[i].size() == 0) {
			cout << "Not Found" << endl << endl;
			continue;
		}

		cout << matching[i].size() << endl;
		for(int j = 0; j < matching[i].size(); ++j) {
			cout << matching[i][j] << " ";
		}
		cout << endl << endl;
	}
	
	return 0;
}