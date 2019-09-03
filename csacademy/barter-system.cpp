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
#include <map>
#include <stack>
#include <queue>
#include <iostream>
#include <fstream>
#include <tuple>
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
#define INF 99999 
	
using namespace std;

map<string, long long> dic;


void printSolution(vector<vector<long long> > dist, int V) { 
	    for (int i = 0; i < V; i++) 
	    { 
	        for (int j = 0; j < V; j++) 
	        { 
	            if (dist[i][j] == LLONG_MAX) 
	                printf("%7s", "INF"); 
	            else
	                cout << dist[i][j] << " "; 
	        } 
	        printf("\n"); 
	    } 
	} 


vector<vector<long long> >  floydWarshall (vector<vector<long long> > graph, int V) { 
    vector<vector<long long> > dist(V, vector<long long>(V)) ;
    int i, j, k; 
  
    for (i = 0; i < V; i++) 
        for (j = 0; j < V; j++) 
            dist[i][j] = graph[i][j]; 
  
    for (k = 0; k < V; k++) { 
        for (i = 0; i < V; i++) { 
            for (j = 0; j < V; j++) { 
               // if ((dist[i][k] * dist[k][j]) % 998244353 < dist[i][j]) {
               	if( dist[i][k] != LLONG_MAX && dist[k][j] != LLONG_MAX && dist[i][j] == LLONG_MAX){
                    dist[i][j] = (dist[i][k] * dist[k][j]) % 998244353; 
               	}
               
            } 
        } 
    } 
  
    // Print the shortest distance matrix 
   return dist;
} 


int main() {
	long long N;
	cin >> N;

	vector<tuple<string, string, long long>   >  mp;

	unordered_set<string> rat; 
	
	for(int i = 0; i < N; ++i) {
		string src, dest;
		long long ratio;
		cin >> src >> dest >> ratio;
		mp.push_back({src, dest, ratio});
		rat.insert(dest);
		rat.insert(src);
	}

	

	vector<string> vt(rat.begin(), rat.end());
	int V= vt.size();
	vector<vector<long long>> mat(V, vector<long long>(V,LLONG_MAX));



	unordered_map<string, int> m;
	for(int i = 0; i < V; ++i) m[vt[i]] = i;

	for(auto t: mp) {
		mat[m[get<0>(t)]][m[get<1>(t)]] = get<2>(t);
	}


	vector<vector<long long> >  res = floydWarshall(mat, V);

	int Q;
	cin >> Q;
	for(int i = 0; i < Q; ++i) {
		string src, dest;
		cin >> src >> dest;
		if (src == dest) {
			cout << 1 << endl;
		} else {
			long long k= res[m[src]][m[dest]];
			if (k == LLONG_MAX)
			cout << -1 << endl;
		else cout << k << endl;
		}
	}

	

	return 0;
}