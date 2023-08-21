#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void almostSorted(vector<int> arr) {
    vector<int> sorted(arr);
    sort(sorted.begin(), sorted.end());

    if (arr == sorted) {
        cout << "yes\n";
        return;
    }

    int i = 0, j = arr.size() - 1;

    while (i < arr.size() && arr[i] == sorted[i]) i++;
    while (j >= 0 && arr[j] == sorted[j]) j--;

    swap(arr[i], arr[j]);
    if (arr == sorted) {
        cout << "yes\n";
        cout << "swap " << i + 1 << " " << j + 1 << "\n";
        return;
    }
    swap(arr[i], arr[j]); 

    reverse(arr.begin() + i, arr.begin() + j + 1);
    if (arr == sorted) {
        cout << "yes\n";
        cout << "reverse " << i + 1 << " " << j + 1 << "\n";
        return;
    }

    cout << "no\n";
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    almostSorted(arr);
    return 0;
}
