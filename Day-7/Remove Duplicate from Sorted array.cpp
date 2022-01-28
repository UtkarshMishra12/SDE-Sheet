#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int removeDuplicates(vector <int> &v){
    int n=v.size();
    if(n==0) return 0;
    int i=0;
    for(int j=1;j<n;j++){
        if(v[j]!=v[i]){
            i++;
            v[i]=v[j];
        }
    }
    return i+1;
}

int main() {
     vector <int> v={1,1,2,2,3,3,3};
     cout<<removeDuplicates(v);
     cout<<endl;
     for(auto i:v){
         cout<<i<<" ";
     }
    //Call Func
	// your code goes here
	return 0;
}
 