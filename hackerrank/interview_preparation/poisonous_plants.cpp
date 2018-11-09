#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <utility>
#include <stack>
#include <unordered_set>

using namespace std;

int poisonousPlants(vector<int> p) {
	int nbDay = 0;
	stack<int> st;
	unordered_set<int> remove;


	st.push(p[0]);

	for(int i = 1; i < p.size(); ++i) {
		if (p[i] > st.top()) {
			if (remove.empty() || remove.find(i - 1) != remove.end()) {
				nbDay++;
			}
			remove.insert(i);
		} else {
			st.push(p[i]);
		}
	}
	return nbDay;
}

int main() {

	int n;
	cin >> n;

	vector<int> pesticide(n);

	for(int i = 0; i < n; ++i) {
		cin >> pesticide[i];
	}

	cout << poisonousPlants(pesticide) << endl;


	return 0;
}