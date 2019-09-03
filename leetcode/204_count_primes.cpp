#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    int i = 2;

    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

int countPrimes(int n) {
    int cpt = 0;
    for(int i = 2; i <n; ++i){
        if (isPrime(i)) {
            cpt++;
        }
    }
    return cpt;
}

int main() {

    int n;
    cin >> n;

    cout << countPrimes(n) << endl;

    return 0;
}