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
	int n, m;
	cin >> n;

	vector<int> scores(n);

	for(int i = 0; i < n; ++i) {
		cin >> scores[i];
	}

	cin >> m;
	vector<int> alice(m);
	for(int i = 0; i < m; ++i) {
		cin >> alice[i];
	}

	sort(scores.begin(), scores.end(), std::greater<int>());

	vector<pair<int, int> > scoresRank;
	scoresRank.push_back(make_pair(1, scores[0]));

	for(int i = 1; i < n; ++i) {
		if (scores[i] == scoresRank.back().second) {
			scoresRank.push_back(make_pair(scoresRank.back().first, scores[i]));
		} else {
			scoresRank.push_back(make_pair(scoresRank.back().first + 1, scores[i]));
		}
	}

	for(int i = 0; i < m; ++i) {
	
		int left = 0, right = n - 1;

		if (alice[i] >= scores[0]) {
			cout << 1 << endl;
		} else {
			while (left <= right ) {
				int mid = (left + right) / 2;
				if (scores[mid] > alice[i]) {
					left = mid + 1;
				} else {
					right = mid - 1;
				}
			}

			if (scoresRank[left - 1].second == alice[i]) {
				cout << scoresRank[left - 1].first << endl;
			} else {
				cout << scoresRank[left - 1].first + 1 << endl;
			}
		}	
	}

	return 0;
}