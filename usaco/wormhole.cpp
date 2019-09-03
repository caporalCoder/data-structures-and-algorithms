/*
ID: fromod1
PROG: wormhole
LANG: C++
*/

#include <fstream>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
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
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

	
using namespace std;

int WH[13], nright[13];
int x[13], y[13];
int n;

bool cycle(){

    for( int i = 1; i <= n; i++ ){
        int posi = i;
        for( int j = 1; j <= n; j++ )
            posi = nright[ WH[posi] ];
        if( posi )
            return true;
    }
    return false;

}

int count_ways(){

    int i;
    for( i = 1; i <= n; i++ )
        if( WH[i] == 0 )
            break;

    if( i > n )
        return cycle() ? 1:0;

    int ret = 0;
    for( int j = i+1; j <= n; j++ ){
        if( WH[j] == 0 ){
            WH[i] = j;
            WH[j] = i;
            ret += count_ways();
            WH[j] = 0; WH[i] = 0;
        }
    }
    return ret;

}


int main() {

	optimizar_io

	ifstream fin;
	ofstream fout;
	fin.open("wormhole.in");
	fout.open("wormhole.out");

	fin >> n;

    for( int i = 1; i <= n; i++ ) {
        fin >> x[i] >> y[i];
    }

    for( int i = 1; i <= n; i++ ){
        for( int j = 1; j <= n; j++ ){
            if( x[j] > x[i] && y[i] == y[j] ){
                if( nright[i] == 0 || x[j] - x[i] < x[ nright[i] ] - x[i] )
                    nright[i] = j;
            }
        }
    }

    fout << count_ways() << "\n";

	
	fin.close();
	fout.close();


	return 0;
}
