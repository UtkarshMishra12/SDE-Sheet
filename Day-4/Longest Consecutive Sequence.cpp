#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 int longestConsecutive(vector<int>& nums) {
        set <int> s;
        for(auto i:nums){
            s.insert(i);
        }
        //1 2 3 4 100 200
        int longe=0;
        for(auto i:nums){
            if(!s.count(i-1)){
              int curstreak=1;
              int el=i;
              while(s.count(el+1)){
                  curstreak+=1;
                  el+=1;
              }
                longe=max(longe,curstreak);
            }
        }
        return longe;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 