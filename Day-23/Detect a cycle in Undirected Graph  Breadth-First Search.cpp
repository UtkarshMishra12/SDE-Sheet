#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back


class Solution{ 
    public:
bool checkForCycle(int s,vector<int>adj[],vector<int>&vis){
    queue <pair<int,int>>q;
    vis[s]=true;
    q.push({s,-1});
    
    while(!q.empty()){
        int node=q.front().first;
        int prev=q.front().second;
        q.pop();
        
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=true;
                q.push({it,node});
            }
            else if(prev!=it) return true;
        }
    }
    return false;
}

bool isCycle(int V,vector<int>adj[]){
    vector<int> vis(V+1,0);
    for(int i=1;i<=V;i++){
        if(!vis[i]){
            if(checkForCycle(i,adj,vis)) return true;
        }
    }
    return false;
}
};
void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    vector <int> adj[5];
    
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,2,3);
    addEdge(adj,1,3);
    addEdge(adj,2,4);
    
    Solution obj;
    int num=obj.isCycle(5, adj);
    if(num==1)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    //Call Func
	// your code goes here
	return 0;
}
 