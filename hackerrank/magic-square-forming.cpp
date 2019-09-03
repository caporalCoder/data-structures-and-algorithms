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
#include <limits>
#include <utility>
#include <functional>

using namespace std;

int computeCost(vector<int> A, vector<int> B) {
	int cost = 0;
	for(int i = 0; i < 9; ++i) {
		cost += abs(A[i] - B[i]);
	}
	return cost;
}

bool isMagic(vector<int> A) {
	for(int i = 0; i < 3; ++i) {
		int s1 = 0, s2 = 0;
		for(int j = 0; j < 3; ++j) {
			s1 += A[i * 3 + j];
			s2 += A[i + 3 * j];
		}
		if (s1 != 15 || s2 != 15) return false;
	}

	if (A[0] + A[4] + A[8] != 15 || A[2] + A[4] + A[6] != 15) return false;

	return true;
}

int main() {

	vector<int> square(9), possibility(9);

	for(int i = 0; i < 9; ++i) {
		cin >> square[i];
		possibility[i] = i + 1;
	} 

	int minCost = std::numeric_limits<int>::max();


	do {
		if (isMagic(possibility)){
			minCost = min(minCost, computeCost(square, possibility));
		}
	} while (next_permutation(possibility.begin(), possibility.end()));


	cout << minCost << endl;
	
	return 0;
}