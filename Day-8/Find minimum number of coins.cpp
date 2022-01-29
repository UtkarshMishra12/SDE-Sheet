#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int minCoins(int V){
    vector <int> c={1,2,5,10,20,50,100,500,1000};
    int n=9;
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        if(V>=c[i]){
            V-=c[i];
            cnt++;
        }
    }
    return cnt;
}

int main() {
     cout<<minCoins(49);
    
    //Call Func
	// your code goes here
	return 0;
}
 