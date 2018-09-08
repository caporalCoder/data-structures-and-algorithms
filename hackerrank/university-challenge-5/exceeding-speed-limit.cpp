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

	int speed;
	cin >> speed;

	if (speed <= 90) {
		cout << "0 No punishment" << endl;
	} else if (speed > 90 && speed < 110) {
		cout << (speed - 90) * 300 << " Warning" << endl;
	} else {
		cout << (speed - 90) * 500 << " License removed" << endl;
	}
	
	return 0;
}