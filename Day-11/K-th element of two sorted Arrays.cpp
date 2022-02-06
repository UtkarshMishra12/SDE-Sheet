#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(n > m) {
            return kthElement(arr2, arr1, m, n, k); 
        }
        
        int low = max(0,k-m), high = min(k,n);
        
        while(low <= high) {
            int cut1 = (low + high) >> 1; 
            int cut2 = k - cut1; 
            int l1 = cut1 == 0 ? INT_MIN : arr1[cut1 - 1]; 
            int l2 = cut2 == 0 ? INT_MIN : arr2[cut2 - 1];
            int r1 = cut1 == n ? INT_MAX : arr1[cut1]; 
            int r2 = cut2 == m ? INT_MAX : arr2[cut2]; 
            
            if(l1 <= r2 && l2 <= r1) {
                return max(l1, l2);
            }
            else if (l1 > r2) {
                high = cut1 - 1;
            }
            else {
                low = cut1 + 1; 
            }
        }
        return 1; 
    }


int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 