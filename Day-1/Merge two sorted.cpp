#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

void merge(vector <int> a, vector <int> b){
    int n=a.size();
    int m=b.size();
    vector <int> ans(n+m);
    merge(a.begin(),a.end(),b.begin(),b.end(),ans.begin());
    for(auto i:ans){
        cout<<i<<" ";
    }
}

int main() {
    vector <int> a={1,2,3,4,5,6};
    vector <int> b={7,8,9};
    merge(a,b);
    //Call Func
	// your code goes here
	return 0;
}
 