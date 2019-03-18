#include <iostream>
#include <vector>
#include <cmath>

int main() {
	int n;
	std::cin >> n;
	std::vector<std::vector<int> > data(n, std::vector<int>(n));

	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			std::cin >> data[i][j];
		}
	}	
	int d1 = 0, d2 = 0;

	for(int i = 0; i < n; ++i) {
		d1 += data[i][i];
		d2 += data[i][n - i - 1];
	}
	std::cout << abs(d1 - d2) << std::endl;	
	return 0;
}