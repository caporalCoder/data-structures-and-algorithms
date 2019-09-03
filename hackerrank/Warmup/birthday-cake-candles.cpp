#include <iostream>
#include <algorithm>
#include <vector> 
#include <functional>

int main() {
    unsigned long long age;
    std::cin >> age;
    std::vector<unsigned long long> candles(age);

    for(int i  = 0; i < age; ++i) std::cin >> candles[i];

    sort(candles.begin(), candles.end(), std::greater<int>());

    int i = 1;
    while (i < age && candles[i -1] == candles[i]) ++i;

	std::cout << i << std::endl; 
	return 0;
}