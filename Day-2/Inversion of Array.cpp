#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int inversion(vector <int> v){
    int n=v.size();
    int c=0;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(v[i]>v[j]){
                c++;
            }
        }
    }
    return c++;
}


int main() {
    vector <int> v={3,1,2};
    cout<<inversion(v);
    
    //Call Func
	// your code goes here
	return 0;
}
 