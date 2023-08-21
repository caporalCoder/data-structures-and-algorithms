#include <iostream>

int main() {
    int t;
    std::cin >> t;
    
    while(t--) {
        int n;  
        std::cin >> n;
        
        int res = 0;
        
        int temp = n;
        
        while (temp > 0) {
            int k = temp % 10;
            temp /= 10;
            
            if (k == 0) continue;
            
            if (n % k == 0) ++res;
        }
        
        std::cout << res << std::endl;
    }
    
    return 0;
}
