#include <iostream>
#include <vector>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> data(n);
	int positive = 0, negative = 0, zero = 0;
	for(int i = 0; i < n; ++i) {
		std::cin >> data[i];
		if (data[i] > 0) ++positive;
		else if (data[i] < 0) ++negative;
		else ++zero;
	}

	std::cout << positive / (float) (n) << std::endl;
	std::cout << negative / (float) (n) << std::endl;
	std::cout << zero / (float) (n) << std::endl;

	return 0;
}