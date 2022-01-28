#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int maxOnes(vector <int> &v){
    int n=v.size();
    int cnt=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            cnt++;
        }
        maxi=max(cnt,maxi);
        if(v[i]!=1){
            cnt=0;
        }
    }
    return maxi;
}

int main() {
    vector <int> v={1,1,1,0,1,0,1,1,1,1,0,0,0,1,1,1,1,1};
    cout<<maxOnes(v);
    
    //Call Func
	// your code goes here
	return 0;
}
 