#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back


int givenxor(vector <int> &v, int k){
    map<int,int> mp;
    int cnt=0,xorr=0;
    for(auto it:v){
        xorr=xorr^it;
        if(xorr==k){
            cnt++;
        }
        if(mp.find(xorr^k)!=mp.end()){
            cnt+=mp[xorr^k];
        }
        mp[xorr]+=1;
    }
    return cnt;
}


int main() {
    vector <int> v={4,2,2,6,4};
    int k=6;
    cout<<givenxor(v,k);
    
    //Call Func
	// your code goes here
	return 0;
}
 