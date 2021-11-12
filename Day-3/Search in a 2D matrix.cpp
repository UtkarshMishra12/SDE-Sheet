#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back


//O(nxm)
bool searchMatrix(vector<vector<int>>& m, int target) {
        for(auto i:m){
            for(auto j:i){
                if(j==target){
                    return true;
                }
            }
        }
        return false;
    }

//Optimal solution of O(n x Logm)
bool search(vector <vector<int>> &v, int t){
    int n=v.size();
    int m=v[0].size();
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(v[i][j]==t){
            return 1;
        }
        else{
            if(v[i][j]>t){
                j--;
            }
            else{
                i++;
            }
        }
    }
}
int main() {
    vector <vector<int>> v={ {1,2,3}, {4,5,6}, {7,8,9} };
    cout<<search(v,6);
    
    //Call Func
	// your code goes here
	return 0;
}
 