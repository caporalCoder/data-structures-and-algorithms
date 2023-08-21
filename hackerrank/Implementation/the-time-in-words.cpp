#include <iostream>
#include <vector>
using namespace std;

string timeInWords(int h, int m) {
    vector<string> words = {
        "zero", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine", 
        "ten", "eleven", "twelve", "thirteen", 
        "fourteen", "quarter", "sixteen", "seventeen", 
        "eighteen", "nineteen", "twenty"
    };
    for (int i = 1; i <= 9; i++) {
        words.push_back("twenty " + words[i]);
    }

    if (m == 0) {
        return words[h] + " o' clock";
    } else if (m > 0 && m <= 30) {
        if (m == 1) {
            return "one minute past " + words[h];
        } else if (m == 59) {
            return "one minute to " + words[(h % 12) + 1];
        } else if (m == 15) {
            return "quarter past " + words[h];
        } else if (m == 30) {
            return "half past " + words[h];
        } else if (m < 21) {
            return words[m] + " minutes past " + words[h];
        } else {
            return words[m] + " minutes past " + words[h];
        }
    } else {
        if (m == 45) {
            return "quarter to " + words[(h % 12) + 1];
        } else {
            return words[60 - m] + " minutes to " + words[(h % 12) + 1];
        }
    }
}

int main() {
    int h, m;
    cin >> h >> m;
    cout << timeInWords(h, m) << endl;

    return 0;
}
