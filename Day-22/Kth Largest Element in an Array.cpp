#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(), greater<int>() );
        return nums[k-1];
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 