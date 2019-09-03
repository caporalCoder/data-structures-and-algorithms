#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <functional>

std::string nextBigger(std::string str) {
	int  i = str.size() - 1;
	char minChar = str.back();

	std::string base_string(str);

	while(i > 0 && str[i] <= str[i - 1]) {
		--i;
	}


	if (i == 0) {
		return "no answer";
	}

	int indexMin = i;
	for(int j = i + 1; j < str.size(); ++j) {
		if (str[j] > str[i - 1] && str[j] < str[indexMin]) {
			indexMin = j;
		}
	}

	char tmp = str[indexMin]; str[indexMin] = str[i - 1]; str[i - 1] = tmp;
	std::sort(str.begin() + i, str.end());

	return str;
}

int main() {
	int n;
	std::cin >> n;
	std::string word;
	for(int i = 0; i < n; ++i) {
		std::cin >> word;
		std::cout << nextBigger(word) << std::endl;
	}
	return 0;
}