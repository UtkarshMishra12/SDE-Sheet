#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back



int main() {
    
    /// Adjacent Matrix
    int n,m;
    cin>>n>>m;
    
    int adj[n+1][n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        
        adj[u][v]=1;
        adj[v][u]=1;
    }
    
    /// Adjacent List
    int n,m;
    cin>>n>>m;
    
    vector <int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    //Call Func
	// your code goes here
	return 0;
}
 