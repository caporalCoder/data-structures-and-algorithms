#include <iostream>
#include <string>

using namespace std;
string toLowerCase(string str) {
    for(int i = 0; i < str.size(); ++i) {
        if (str[i] >='A' && str[i] <= 'Z') {
            str[i] +=32;
        }
    }
    return str;
}

int main() {
    string str;
    cin >> str;
    cout << toLowerCase(str) << endl;
    return 0;
}