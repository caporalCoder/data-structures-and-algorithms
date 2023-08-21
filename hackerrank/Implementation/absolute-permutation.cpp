#include <iostream>
#include <vector>
using namespace std;

vector<int> absolutePermutation(int n, int k) {
    if (k == 0) {
        vector<int> result(n);
        for (int i = 1; i <= n; i++) {
            result[i-1] = i;
        }
        return result;
    } else if (n % (2*k) != 0) {
        return {-1};
    } else {
        vector<int> result(n);
        bool add = true;
        for (int i = 1; i <= n; i++) {
            if (add) {
                result[i-1] = i + k;
            } else {
                result[i-1] = i - k;
            }
            if (i % k == 0) {
                add = !add;
            }
        }
        return result;
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> result = absolutePermutation(n, k);

        for(int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
