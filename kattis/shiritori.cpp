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

int main() {
	long long n;
	unordered_map<int, unordered_set<string> > play;

	cin >> n;

	vector<string> words(n);
	for(int i = 0; i < n; ++i) {
		cin >> words[i];
	}

	int win = 0;
	for(int i = 0; i < n; ++i) {
		if (i == 0) {
			play[1].insert(words[i]);
			continue;
		}

		if (i & 1) {
			if(play[1].count(words[i]) || play[2].count(words[i]) || words[i][0] != words[i - 1].back()) {
				win = 1;
				break;
			}
			play[2].insert(words[i]);
			continue;
		}

		if(play[1].count(words[i]) || play[2].count(words[i]) || words[i][0] != words[i - 1][words[i - 1].size() - 1]) {
			win = 2;
			break;
		}
		play[1].insert(words[i]);	

	}

	if (win == 0) {
		cout << "Fair Game" << endl;
	} else if (win == 1) {
		cout << "Player 2 lost" << endl;
	} else {
		cout <<"Player 1 lost" << endl;
	}

	return 0;
}