#include <iostream>
#include <vector>
#include <numeric> 

// C++17 and more.

int getTotalX(const std::vector<int>& a, const std::vector<int>& b) {
    // Compute LCM of array 'a'
    int current_lcm = a[0];
    for(int num : a) {
        current_lcm = std::lcm(current_lcm, num);
    }

    // Compute GCD of array 'b'
    int current_gcd = b[0];
    for(int num : b) {
        current_gcd = std::gcd(current_gcd, num);
    }

    // Count multiples of LCM that are divisors of GCD
    int count = 0;
    int multiple = current_lcm;
    while (multiple <= current_gcd) {
        if (current_gcd % multiple == 0) {
            count++;
        }
        multiple += current_lcm;
    }

    return count;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n), b(m);
    for(int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    for(int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }

    std::cout << getTotalX(a, b) << std::endl; 

    return 0;
}
