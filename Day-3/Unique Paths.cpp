#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

/*int count(int i,int j,int n, int m, vector <vector<int>> &dp){
        (i==(n-1) && j==(m-1)){
            return 1;
        }
        if(i>=n || j>=m) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        else return dp[i][j]=count(i+1,j,n,m,dp) + count(i,j+1,n,m,dp); 
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return count(0,0,n,m,dp);
        
    }*/
    int uniquePaths(int m, int n) {
        int N=n+m-2;
        int r=m-1;
        double res=1;
        for(int i=1;i<=r;i++){
            res=res*(N-r+i)/i;
        }
        return (int)res;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 