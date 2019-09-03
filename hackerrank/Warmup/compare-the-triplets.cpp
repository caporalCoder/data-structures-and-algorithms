#include <iostream>

void compte(int a, int b, int& alice, int& bob) {
	if (a > b) {
		++alice;
	} else if (a < b) {
		++bob;
	}
}

int main() {
	int alice = 0, bob = 0, a0, b0, a1, b1, a2, b2;

	std::cin >> a0 >> a1 >> a2;
	std::cin >> b0 >> b1 >> b2;

	compte(a0, b0, alice, bob);
	compte(a1, b1, alice, bob);
	compte(a2, b2, alice, bob);

	std::cout << alice << " " << bob << std::endl;
	return 0;
}