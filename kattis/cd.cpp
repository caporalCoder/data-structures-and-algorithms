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
#include <unordered_set>
#include <list>
#include <vector>
#include <iomanip>
#include <numeric>
#include <utility>
#include <functional>

using namespace std;

int main() {
	int N, M;
	while(cin >> N >> M && N != 0 && M != 0) {
		int cpt = 0;
		//vector<int> data(N);
		unordered_set<int> st;
		int k;
		for(int i = 0; i < N; ++i) {
			//cin >> data[i];
			cin >> k;
			st.insert(k);
		}

		for(int i = 0; i < M; ++i) {
			cin >> k;
			if (st.count(k)) ++cpt;
			/*
			int l = 0, r = N - 1;

			while(l <= r) {
				int mid = (l + r) / 2;
				if (data[mid] < k) {
					l = mid + 1;
				} else if (data[mid] > k) {
					r = mid - 1;
				} else {
					++cpt;
					break;
				}
			}*/
		}
		cout << cpt << endl;
	}
	return 0;
}