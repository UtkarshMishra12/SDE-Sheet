#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int k=n/3;
        unordered_map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        vector <int> v;
        for(auto i:m){
            if(i.second >k){
                v.push_back(i.first);
            }
        }
        return v;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 