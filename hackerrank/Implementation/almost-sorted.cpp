#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> data(n);
	for(int i = 0; i < n; ++i) {
		std::cin >> data[i];
	}
	return 0;
}