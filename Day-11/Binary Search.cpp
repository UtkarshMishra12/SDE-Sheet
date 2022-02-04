#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

bool binarysearch(vector<int> &v,int tar){
    int n=v.size();
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(v[mid]==tar){
            return 1;
        }
        else if(v[mid]>tar){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return 0;
}

int main() {
    vector <int> v={1,2,3,4,5,77,88,99,5657};
    cout<<binarysearch(v,99);
    
    //Call Func
	// your code goes here
	return 0;
}
 