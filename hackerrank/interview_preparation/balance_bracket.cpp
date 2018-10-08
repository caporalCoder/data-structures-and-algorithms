#include <iostream>
#include <stack>


using namespace std;


bool isValide(string bracketStr) {
	stack<char> st;

	for(int i = 0; i < bracketStr.size(); ++i) {
		if (bracketStr[i] == '}' || bracketStr[i] == ')' || bracketStr[i] == ']') {
			if (st.size() == 0) return false;

			switch(bracketStr[i]) {
				case '}' : if (st.top() != '{') return false; break;
				case ')' : if (st.top() != '(') return false; break;
				case ']' : if (st.top() != '[') return false; break;
			}
			st.pop();
		} else {
			st.push(bracketStr[i]);
		}
	}
	return st.size() == 0;
}
int main()  {
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		string bracketStr;
		cin >> bracketStr;

		if (!isValide(bracketStr)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}