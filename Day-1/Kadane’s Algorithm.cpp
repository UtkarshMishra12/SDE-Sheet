#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int maxsubarraysum(vector <int> v){
    int cursum=0,maxsum=INT_MIN;
    for(int i=0;i<v.size();i++){
        cursum+=v[i];
        if(cursum>maxsum){
            maxsum=cursum;
        }
        if(cursum<0){
            cursum=0;
        }
    }
    return maxsum;
}

int main() {
    vector <int> v={-2,-3,4,-1,-2,1,5,-3};
    cout<<maxsubarraysum(v);
    //Call Func
	// your code goes here
	return 0;
}
 