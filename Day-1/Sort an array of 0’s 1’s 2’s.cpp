#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

vector <int> sort(vector <int> v){
    int a=0,b=0,c=0;
    for(auto i:v){
        if(i==0){
            a++;
        }
        else if(i==1){
            b++;
        }
        else{
            c++;
        }
    }
    ll j=0;
    while(a--){
        v[j]=0;
        j++;
    }
    while(b--){
        v[j]=1;
        j++;
    }
    while(c--){
        v[j]=2;
        j++;
    }
}

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 