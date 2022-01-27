#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

vector <vector<int>> threesum(vector <int> &v){
    int n=v.size();
    if(n<3){
        return {};
    }
    sort(v.begin(),v.end());
    vector <vector<int>> ans;
    
    for(int i=0;i<n;i++){
        if(i>0 && v[i]==v[i]-1){
            continue;
        }
        
        int j=i+1,k=n-1;
        while(j<k){
            int s=v[i]+v[j]+v[k];
            if(s<0) j++;
            else if(s>0) k--;
            else ans.push_back({v[i],v[j],v[k]});
            
            while(j<k && v[j]==v[j+1]) j++;
            while(j<k && v[k]==v[k+1]) k--;
            
            j++;
            k--;
        }
    }
    
    return ans;
}


int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 