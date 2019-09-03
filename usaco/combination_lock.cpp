/*
ID: fromod1
PROG: combo
LANG: C++
*/

#include <vector>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <tuple>
#include <cstring>
#include <unordered_set>
#include <chrono>
#include <complex>
#include <iostream>
#include <set>
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

class code {
public:
  int a;
  int b;
  int c;
 

  code(int a, int b, int c): a(a), b(b), c(c) {
  }
 
  bool operator <(const code& co) const {
    return 100 * a + 10 * b + c < 100 * co.a + 10 * co.b + co.c;
  }
};



int main() {
	ifstream fin;
	ofstream fout;
	fin.open("combo.in");
	fout.open("combo.out");

	ll N;

	fin >> N;

	tuple<int, int, int> john_code, master_code;

	int a, b, c;
	fin >> a >> b >> c;
	john_code = make_tuple(a, b, c);

	fin >> a >> b >> c;
	master_code = make_tuple(a, b, c);

	set<code> unique_combinaison;
 
	for (int x = -2; x <= 2; ++x) {
		for (int y = -2; y <= 2; ++y) {
			for (int z =  -2; z <= 2; ++z) {
				code c = code((get<0>(john_code) + x + N ) % N + 1, (get<1>(john_code) + y + N) % N + 1, (get<2>(john_code) + z + N) % N + 1);
				if (c.a >= 1 && c.a <= N && c.b >= 1 && c.b <= N && c.c >= 1 && c.c <= N) {
					unique_combinaison.insert(c);
					//cout << c.a << " " << c.b << " " << c.c << endl;
				}



				c = code((get<0>(master_code) + x + N) % N + 1, (get<1>(master_code) + y + N) % N + 1, (get<2>(master_code) + z + N) % N + 1);
				if (c.a >= 1 && c.a <= N && c.b >= 1 && c.b <= N && c.c >= 1 && c.c <= N) {
					unique_combinaison.insert(c);
					//cout << c.a << " " << c.b << " " << c.c << endl;
				}
			}
		}
	}

	//cout << unique_combinaison.size() << endl;

	fout << unique_combinaison.size() << endl;
	
	fin.close();
	fout.close();


	return 0;
}
