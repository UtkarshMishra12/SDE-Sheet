#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

void missngRepeat(vector <int> v){
    unordered_map <int,int> mp;
    for(auto i:v){
        mp[i]++;
    }
    vector <int> ans;
    for(int i=1;i<=mp.size();i++){
        if(mp[i]==0){
            ans.pb(i);
        }
        if(mp[i]==2){
           ans.pb(i);
        }
    }
    for(auto i:ans){
        cout<<i<<endl;
    }
    
}

int main() {

    vector <int> v={9,8,7,6,5,4,3,6,1};
    missngRepeat(v);
    //Call Func
	// your code goes here
	return 0;
}
 