#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int maxPlatform(int arr[], int dep[], int n){
    sort(arr,arr+n);
    sort(dep,dep+n);
    
    int plat_need=1,result=1;
    int i=1,j=0;
    
    while(i<n && j<n){
        if(arr[i] <= dep[j]){
            plat_need++;
            i++;
        }
        else if(arr[i] > dep[j]){
            plat_need--;
            j++;
        }
        if(plat_need > result){
            result=plat_need;
        }
    }
    return result;
}

int main() {
    int arr[] = {900,940,950,1100,1500,1800}, dep[] = {910,1200,1120,1130,1900,2000};
    int n=6;
    cout<<maxPlatform(arr,dep,n);
    
    //Call Func
	// your code goes here
	return 0;
}
 