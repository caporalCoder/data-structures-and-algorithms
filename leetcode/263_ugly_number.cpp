#include <iostream>
#include <cmath>

using namespace std;


bool isUgly(int num) {

    if (num <= 0) return false;
    int factor[] = {2, 3, 5};

    int i = 0;
    while(i < 3 && num != 1) {
        if (num % factor[i] == 0) {
            num /= factor[i];
        } else {
            ++i;
        }
    }
    return i < 3;   
}

int main() {
    int n; 

    cin >> n;

    cout << isUgly(n) << endl;

    return 0;
}