#include <iostream>


int main() {
    int n;
    std::cin >> n;
    if (n > 2 && n % 2 == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}