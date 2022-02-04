#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

double multiply(double number,int n){
    double ans=1.0;
    for(int i=1;i<=n;i++){
        ans*=number;
    }
    return ans;
}

void getNthRoot(int n, int m){
    double low=1;
    double high=m;
    double eps=1e-6;
    
    while( (high-low)>eps ){
        double mid=(high+low)/2.0;
        if( multiply(mid,n)<m ){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    cout<<low<<" "<<high<<" "<<endl;
    
    cout<<pow(m,(double)(1.0/(double)n));
}


int main() {
    int n;cin>>n;
    int m;cin>>m;
    getNthRoot(n,m);
    
    //Call Func
	// your code goes here
	return 0;
}
 