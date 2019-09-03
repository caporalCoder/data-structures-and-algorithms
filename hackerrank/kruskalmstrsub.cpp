#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
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

int disjointSet[30001];

void make_set(int v) {
    disjointSet[v] = v;
}

int find_set(int v) {
    if (v == disjointSet[v])
        return v;
    return find_set(disjointSet[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        disjointSet[b] = a;
    }
}

int main() {
	int g_nodes, g_edges;
    int g_from, g_to, g_weight;

    cin >> g_nodes >> g_edges;
    

    vector<pair<int, pair<int, int> > > listOfEdge;
    for(int i = 0; i < g_edges; ++i) {
        cin >> g_from >> g_to >> g_weight;
        listOfEdge.push_back(make_pair(g_weight, make_pair(g_from, g_to)));
        make_set(g_from);
        make_set(g_to);
    }

    sort(listOfEdge.begin(), listOfEdge.end());


    int minimumCost = 0;
    
    for(int i = 0; i < g_edges; ++i) {
        int u = listOfEdge[i].second.first; 
        int v = listOfEdge[i].second.second; 
  
        int set_u = find_set(u); 
        int set_v = find_set(v); 
  
        if (set_u != set_v) { 
            minimumCost += listOfEdge[i].first; 
            union_sets(set_u, set_v); 
        } 
    }

    cout << minimumCost << endl;
	return 0;
}