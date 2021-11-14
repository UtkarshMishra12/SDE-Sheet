#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       vector<pair<int,int>> v;
       for(int i=0;i<n;i++){
           v.push_back({nums[i],i});
       }
       sort(v.begin(),v.end());
       int i=0,j=n-1;
       while(i<j){
          int sum=v[i].first+v[j].first;
          if(sum==target){
              return {v[i].second,v[j].second};
          }
          else if(sum>target){
              j--;
          }    
          else{
              i++;
          }    
        }
        return{-1,-1};
   }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 