#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

//0 1 0 2 1 0 1 3 2 1 2
int water(vector <int> &v){
    int n=v.size();
    if(n<=2){
        return 0;
    }
    vector <int> l(n,0), r(n,0);
    l[0]=v[0];
    r[n-1]=v[n-1];
    int res=0;
    for(int i=1;i<n;i++){
        l[i]=max(v[i],l[i-1]);
        r[n-i-1]=max(v[n-i-1],r[n-i]);
    }
    for(int i=0;i<n;i++){
        res+=min(l[i],r[i])-v[i];
    }
    return res;
}

int water2(vector <int> &v){
     int n=v.size();
    int l=0,r=n-1;
    int ml=0,mr=0;
    int res=0;
    while(l<=r){
        if(v[l]<=v[r]){
            if(v[l]>=ml) ml=v[l];
        else 
            res+=ml-v[l];
                
        l++;    
        }
        else{
            if(v[r]>=mr) mr=v[r];
            else res+=mr-v[r];
                
            r--;
        }
    }
        return res;
}

int main() {
    vector <int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<water(v);
    
    //Call Func
	// your code goes here
	return 0;
}
 