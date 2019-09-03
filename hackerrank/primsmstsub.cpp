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
#define inf 1000000000000000001
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back

	
using namespace std;

int main() {
	int g_nodes, g_edges;
    int g_from, g_to, g_weight;

    cin >> g_nodes >> g_edges;
    

    vector<vector<pair<int, int> > > adjacentList(3001, vector<pair<int, int> >());
    for(int i = 0; i < g_edges; ++i) {
        cin >> g_from >> g_to >> g_weight;
        adjacentList[g_from].push_back(make_pair(g_to, g_weight));
        adjacentList[g_to].push_back(make_pair(g_from, g_weight));
    }

    int src;
    cin >> src;

    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;

    int minimumCost = 0;

    unordered_set<int> inMST;

    q.push(make_pair(0, src));

    vector<int> key(3001, mod); 
  
    vector<int> parent(3001, -1); 
  
 
    while(!q.empty()) {
        int u = q.top().second;
        q.pop();
        inMST.insert(u);

        for(vector<pair<int, int> >::iterator it = adjacentList[u].begin(); it != adjacentList[u].end(); ++it) {
            int v = it->first;
            int w = it->second;
            //cout << (inMST.find(v) == inMST.end()) << endl;
            if (inMST.find(v) == inMST.end() && key[v] > w) { 
                key[v] = w; 
                q.push(make_pair(key[v], v)); 
                parent[v] = u; 
            } 
        }
    }

    for(int i = 0; i <= 3001; ++i) {
        if (parent[i] != -1) {
            minimumCost += key[i];
        }
    }

    cout << minimumCost << endl;

	return 0;
}