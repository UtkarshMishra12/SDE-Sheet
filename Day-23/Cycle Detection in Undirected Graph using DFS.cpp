#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back



bool checkForDFS(int node,int parent,vector<int>&vis, vector<int> adj[]){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            if(checkForDFS(it,node,vis,adj)) return true;
        }
        else if(it!=parent) return true;
    }
    return false;
}

bool checkCycle(int V,vector<int>adj[]){
    vector<int> vis(V+1,0);
    for(int i=1;i<=V;i++){
        if(!vis[i]){
            if(checkForDFS(i,-1,vis,adj)) return true;
        }
    }
    return false;
}

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 