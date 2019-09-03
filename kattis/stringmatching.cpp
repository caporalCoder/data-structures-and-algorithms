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

void computeLPSArray(string pat, int M, vector<int>& lps); 

vector<int> patternMatching(string pat, string txt)  { 
    int M = pat.size(); 
    int N = txt.size(); 
  
    vector<int> lps(M); 

    computeLPSArray(pat, M, lps); 

    vector<int> occur;
  
    int i = 0, j = 0; 
    while (i < N) { 
        if (pat[j] == txt[i]) { 
            j++; 
            i++; 
        } 
        if (j == M) { 
            occur.push_back(i - j);
            j = lps[j - 1]; 
        } else if (i < N && pat[j] != txt[i]) { 
            if (j != 0) 
                j = lps[j - 1]; 
            else
                i = i + 1; 
        } 
    } 
    return occur;
} 

void computeLPSArray(string pat, int M, vector<int>& lps) { 
    int len = 0; 
  
    lps[0] = 0; 
    int i = 1; 
    while (i < M) { 
        if (pat[i] == pat[len]) { 
            len++; 
            lps[i] = len; 
            i++; 
        } 
        else  { 
            if (len != 0) { 
                len = lps[len - 1]; 
            } 
            else
            { 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
}


int main() {
	string A, B;
	while(getline(cin, A) && getline(cin, B)) {
		vector<int> occur = patternMatching(A, B);

		for(int i = 0; i < occur.size(); ++i) {
			cout << occur[i] << " ";
		} 
		cout << endl;
	}
	return 0;
}