#include <iostream>
#include <string>
#include <set>
#include <algorithm>

// NOT Working

bool is_palindrome(const std::string& s) {
    std::string rev = s;
    std::reverse(rev.begin(), rev.end());
    return s == rev;
}

std::string find_palindrome(const std::string& a, const std::string& b) {
    std::set<std::string> substrs_a, substrs_b;
    for (int len = 1; len <= a.size(); len++) {
        for (int i = 0; i <= a.size() - len; i++) {
            substrs_a.insert(a.substr(i, len));
        }
    }

    for (int len = 1; len <= b.size(); len++) {
        for (int i = 0; i <= b.size() - len; i++) {
            substrs_b.insert(b.substr(i, len));
        }
    }

    for (const auto& subs : substrs_a) {
        if (substrs_b.find(subs) != substrs_b.end() && is_palindrome(subs)) {
            return subs;
        }
    }

    return "-1";
}

int main() {
    int q;
    std::cin >> q;
    while (q--) {
        std::string a, b;
        std::cin >> a >> b;
        std::cout << find_palindrome(a, b) << std::endl;
    }

    return 0;
}
