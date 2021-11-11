#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

void nextPermutation(vector<int>& nums) {
    //1 3 5 4 2
    int n=nums.size(),k,l;
    for (k=n-2;k>=0;k--){
        if(nums[k]<nums[k+1]){
            break;
        }
    }
    if(k<0){
        reverse(nums.begin(),nums.end());
    }
    else{
       for(l=n-1;l>k;l--){
           if(nums[l]>nums[k]){
            break;
           }
        }
        swap(nums[l],nums[k]);
        reverse(nums.begin()+k+1,nums.end());
    }
  }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 