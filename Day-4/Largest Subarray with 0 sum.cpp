#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int largestSubarraywithzero(vector <int> &nums){
    unordered_map <int,int> mp;
    int maxi=0;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
            if(mp.find(sum)!=mp.end()){
                maxi=max(maxi,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
    }
    return maxi;
}

int main() {
    vector <int> v={15,-2,2,-8,1,7,10,23};
    cout<<largestSubarraywithzero(v);
    //Call Func
	// your code goes here
	return 0;
}
 