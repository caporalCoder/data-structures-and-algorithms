#include <iostream>
#include <algorithm>
#include <limits>

int main() {
	unsigned long long tab[5];
	unsigned long long sum = 0; 
	for(int i = 0; i < 5; ++i) {
		std::cin >> tab[i];
		sum += tab[i];
	}

	unsigned long long minValue = std::numeric_limits<unsigned long long>::max();
	unsigned long long maxValue = std::numeric_limits<unsigned long long>::min() ;

	for(int i = 0; i < 5; ++i) {
		minValue = std::min(minValue, sum - tab[i]);
		maxValue = std::max(maxValue, sum - tab[i]);
	}	

	std::cout << minValue << " " << maxValue << std::endl;

	return 0;
	
}