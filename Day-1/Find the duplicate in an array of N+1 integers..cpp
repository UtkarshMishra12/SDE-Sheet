#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int findDuplicate(vector<int>& nums){
    unordered_map <int,int> mp;
    for(auto i:nums){
        mp[i]++;
    }
    for(auto i:mp){
        if(i.second==2){
            return i.first;
        }
    }
    return -1;
}
int main() {
    vector <int> v={1,3,4,2,2};
    cout<<findDuplicate(v);
    //Call Func
	// your code goes here
	return 0;
}
 