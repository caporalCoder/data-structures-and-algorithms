#include <iostream>
#include <vector>
using namespace std;

string larrysArray(vector<int>& A) {
    int n = A.size();

    // Try to sort all but the last 2 elements using rotations
    for (int i = 0; i < n - 2; i++) {
        // Find the index of the smallest element among the three
        if (A[i] > A[i + 1] || A[i] > A[i + 2]) {
            // If A[i+1] is the smallest
            if (A[i+1] <= A[i] && A[i+1] <= A[i+2]) {
                swap(A[i], A[i+1]);
                swap(A[i+1], A[i+2]);
            }
            // If A[i+2] is the smallest
            else if (A[i+2] <= A[i] && A[i+2] <= A[i+1]) {
                swap(A[i+2], A[i+1]);
                swap(A[i+1], A[i]);
            }
        }
    }

    // If the second last element is greater than the last element, it's not possible to sort
    if (A[n - 2] > A[n - 1]) {
        return "NO";
    }

    return "YES";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        cout << larrysArray(A) << endl;
    }

    return 0;
}
