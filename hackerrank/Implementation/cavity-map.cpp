#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <iostream>
#include <fstream>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back


	
using namespace std;

std::vector<std::string> findCavities(std::vector<std::string>& grid) {
    int n = grid.size();

    // Make a copy of the original grid to modify and return
    std::vector<std::string> result(grid);

    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < n - 1; ++j) {
            // Check if the current cell is greater than its neighbors
            if (grid[i][j] > grid[i-1][j] && 
                grid[i][j] > grid[i+1][j] && 
                grid[i][j] > grid[i][j-1] && 
                grid[i][j] > grid[i][j+1]) {
                result[i][j] = 'X';
            }
        }
    }
    
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> grid(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> grid[i];
    }

    std::vector<std::string> result = findCavities(grid);
    for (const auto& row : result) {
        std::cout << row << endl;
    }
    return 0;
}