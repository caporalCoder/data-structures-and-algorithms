/*
ID: fromod1
PROG: milk3
LANG: C++
*/

#include <vector>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <chrono>
#include <complex>
#include <fstream>

#define distance(a, b) abs(a - b)
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
#define f first
#define s second



using namespace std;

// g++ --std=c++14 -o x.o x.cpp

ll A, B, C;
bool vis[25][25][25] = {false};

vector<ll> ans;

ll move_to(ll V,ll v1,ll v2){ //v1 -> v2
    ll left = V - v2;
    if(v1 > left)
        return left;
    else
        return v1;
}

void dfs(ll a, ll b, ll c) {
	if (vis[a][b][c]) return ;
	vis[a][b][c] = true;
	if (a == 0) ans.push_back(c);

	ll d;
	d = move_to(B,a,b);
	dfs(a - d,b + d,c);
	d = move_to(C,a,c);
	dfs(a - d,b,c + d);
	d = move_to(A,b,a);
	dfs(a + d,b - d,c);
	d = move_to(C,b,c);
	dfs(a,b - d,c + d);
	d = move_to(A,c,a);
	dfs(a + d,b,c - d);
	d = move_to(B,c,b);
	dfs(a,b + d,c - d);
	return;
}

int main() {

	std::ios::sync_with_stdio(false);
	ifstream fin;
	ofstream fout;
	fin.open("milk3.in");
	fout.open("milk3.out");

	fin >> A >> B >> C;

	dfs(0,0, C);

	sort(ans.begin(), ans.end());
	fout << ans[0] ;
	for(int i = 1; i < ans.size(); ++i) {
		fout << " " << ans[i];
	}
	fout << endl;

	fout.close();
	fin.close();
	return 0;
}