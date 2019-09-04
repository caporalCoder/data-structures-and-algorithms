#include <string>
#include <iostream>
#include <algorithm>

int lcs(std::string x, std::string y, int m, int n) {
   int** L = new int*[m + 1];
   
   for(int i = 0; i <= m; ++i) L[i] = new int[n + 1];
   
   for(int i = 0; i <= m; ++i) {
       for(int j = 0; j <= n; ++j) {
           if (i == 0 || j == 0) L[i][j] = 0;
           else if (x[i - 1] == y[j - 1]) L[i][j] = L[i - 1][j - 1] + 1;
           else L[i][j] = std::max(L[i - 1][j], L[i][j - 1]);
       }
   }
   return L[m][n];
}

int main() {

    std::string str1, str2;
    std::cin >> str1 >> str2;


    std::cout << lcs(str1, str2, str1.size(), str2.size()) << std::endl;

    
    return 0;
}