#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <string>
#include <stack>
#include <deque>
#include <list>
#include <vector>
#include <iomanip>
#include <numeric>
#include <utility>
#include <functional>

using namespace std;

int hourglassSum(vector<vector<int>> arr) {
    int max_sum = std::numeric_limits<int>::min();

    for(int i = 1; i < 5; ++i) {
        for(int j = 1; j < 5; ++j) {
            int k = arr[i][j] + arr[i - 1][j] + arr[i - 1][j - 1] + arr[i - 1][j + 1] + arr[i + 1][j] + arr[i + 1][j - 1] + arr[i + 1][j + 1];
            max_sum = max(max_sum, k );
        }
    }
    return max_sum;

}

int main() {

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << hourglassSum(arr) << endl;
    
    return 0;
}