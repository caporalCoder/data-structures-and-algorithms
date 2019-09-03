#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <unordered_set>
#include <list>
#include <iostream>
#include <fstream>
#include <sstream>
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
	unordered_set<string> dic;
	string str;

	getline(cin, str);

	istringstream iss(str);


	int isOk = true;
	while(iss >> str) {
		if (dic.count(str)) isOk = false;
		dic.insert(str);
	}

	if(isOk) {
		cout << "yes" << endl; 
	} else {
		cout << "no" << endl;
	}
	return 0;
}