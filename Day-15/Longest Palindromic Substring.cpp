#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int LongestPalindromicSubstring(string s){
   int n=s.size();
   int dp[n][n];
   int c=0;
   int len=0;
   for(int g=0;g<n;g++){
       for(int i=0,j=g;j<n;i++,j++){
           if(g==0){
               dp[i][j]=1;
           }
           else if(g==1){
               if(s[i]==s[j]){
                   dp[i][j]=1;
               }
               else{
                   dp[i][j]=0;
               }
           }
           else{
               if(s[i]==s[j] && dp[i+1][j-1]==1){
                   dp[i][j]=1;
               }
               else{
                   dp[i][j]=0;
               }
           }
        if(dp[i][j]){
            len=g+1;
        }
       }
   }
   return len;
}

int main() {
     cout<<LongestPalindromicSubstring("aaa");
    
    //Call Func
	// your code goes here
	return 0;
}
 