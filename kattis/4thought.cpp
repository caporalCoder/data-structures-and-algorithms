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

void dfs(vector<vector<char>>& comb, vector<char> ops, vector<char> path, int len) {
	if (len == 3) {
		comb.push_back(path);
		return;
	}
	for(int i = 0; i < ops.size(); ++i) {
		path.push_back(ops[i]);
		dfs(comb, ops, path, len + 1);
		path.pop_back();
	}
}

double evalExpression(vector<char>  expr) {
	char op = '+';
	stack<int> st;

	for(int i = 0; i < expr.size(); ++i) {
		
		if (expr[i] == '+' || expr[i] == '-') {
			if (!st.empty()) {
				int n = st.top(); st.pop();
				switch(op) {
					case '+': n *= +1; break;
					case '-': n *= -1; break;
				}
				st.push(n);
			}
			op = expr[i];
		} else if (expr[i] == '*' || expr[i] == '\\') {
			st.push(expr[i + 1] - '0');
			int n1 = st.top(); st.pop();
			int n2 = st.top(); st.pop();

			switch(op) {
					case '+': n2 *= +1; break;
					case '-': n2 *= -1; break;
			}

			switch(expr[i]) {
				case '*': st.push(n1 * n2); break;
				case '\\': st.push(n2 / n1); break;
			}
			i++;
		} else {
			
			st.push((expr[i]) - '0');
			if (i == expr.size() - 1) {
				int n = st.top(); st.pop();
				switch(op) {
					case '+': n *= +1; break;
					case '-': n *= -1; break;
				}
				st.push(n);
			}
		}
	}
	double result = 0;
	while(!st.empty()) {
		result += st.top();
		st.pop();
	}
	return  result;
}

int main() {
	int n;

	vector<char> ops = {'-', '+', '*', '\\'};

	vector<vector<char>> comb;



	for(int i = 0; i < ops.size(); ++i) {
		dfs(comb, ops, {ops[i]}, 1);
	}

	cin >> n ;
	for(int i = 0; i < n; ++i) {
		int k;
		cin >> k;

		bool not_found = true;
		for(int c = 0; c < comb.size() && not_found; ++c) {
			vector<char> expression = {'4', comb[c][0], '4', comb[c][1], '4', comb[c][2], '4'};
			double a = evalExpression(expression);

			if (a == k) {
				for(int j = 0; j < expression.size(); ++j) {
					cout << expression[j] << " ";
				}
				cout << "= " << a << endl;
				not_found = false;
			}
		}
		if (not_found) {
			cout << "no solution" << endl;
		}

	}
	return 0;
}