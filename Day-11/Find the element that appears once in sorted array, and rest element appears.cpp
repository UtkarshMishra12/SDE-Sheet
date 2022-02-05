#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 2; 
        while(low <= high) {
            int mid = (low + high) >> 1; 
            if(nums[mid] == nums[mid^1]) {
                low = mid + 1; 
            } 
            else {
                high = mid - 1; 
            }
        }
        return nums[low]; 
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 