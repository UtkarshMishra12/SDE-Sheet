#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int majorityElement(vector<int>& nums) {
        /*unordered_map <int,int> mp;
        
        for(auto i:nums){
            mp[i]++;
        }
        int k=nums.size();
        int n=k/2;
        int p=0;
        for(auto it:mp){
            if(it.second >n){
                p=it.first;
                break;
            }
        }
        return p;*/
        
        
        /*sort(nums.begin(),nums.end());
        return nums[nums.size()/2];*/
        
        //Moore Voting Algorithm O(n)
        int cnt=0;
        int el=0;
        
        for(auto i:nums){
            if(cnt==0){
                el=i;
            }
            if(el==i){
                cnt+=1;
            }
            else{
                cnt-=1;
            }
        }
        return el;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 