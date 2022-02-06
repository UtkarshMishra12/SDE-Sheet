#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int s=m+n;
        vector <int> v(m+n,0);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), v.begin());
        if(s%2!=0){
            return v[s/2];
        }
        else{
            int a=s/2;
            int b=a-1;
            return (float)( v[a]+v[b])/2;
        }
        return 0;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 