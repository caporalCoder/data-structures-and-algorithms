#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        string str;
        cin >> str;
        if (str.size() <= 10) {
            cout << str << endl;
        } else {
            cout << str[0] << str.size() - 2 << str[str.size() - 1] << endl;
        }
    }
    return 0;
}