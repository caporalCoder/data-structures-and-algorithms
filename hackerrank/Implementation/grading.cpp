#include <iostream>

int main() {
	int n;
	int g;
	std::cin >> n;
	for(int i = 0; i < n; ++i) {
		std::cin >> g;
		if (g < 38) {
			std::cout << g << std::endl;
		} else if (((g / 5 + 1)  * 5 - g) < 3) {
			std::cout << (g / 5 + 1) * 5 << std::endl;
		} else {
			std::cout << g << std::endl;
		}
	}
	return 0;
}