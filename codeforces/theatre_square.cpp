#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    double n, m, a;
    cin >> n >> m >> a;
    unsigned long long r = ceil(m / a) * ceil(n / a);
    cout << std::fixed <<  r << endl;
    return 0;
}