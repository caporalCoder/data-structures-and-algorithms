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

string superReducedString(string s)
{
	bool change;

	string m = "";
	do
	{
		change = false;
		m = "";
		int i = 1;

		if (s.size() == 1)
			return s;

		while (i < s.size()) {
			if (s[i] != s[i - 1]) {
				m += s[i - 1];
			}
			else {
				change = true;
				i++;
			}
			if (i == s.size() - 1) {
				m += s[i];
			}
			i++;
		}
		//cout << m << endl;
		s = m;
	} while (change);
	return s;
}

int main()
{

	string str;

	cin >> str;

	string m = superReducedString(str);
	if (m.size() == 0)
	{
		cout << "Empty String" << endl;
	}
	else
	{
		cout << m << endl;
	}

	return 0;
}