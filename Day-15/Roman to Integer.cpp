#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int RomanToInteger(string s){
    vector <int> v(256);
    v['I']=1,v['V']=5,v['X']=10,v['L']=50,v['C']=100,v['D']=500,v['M']=1000;
    int result=0;
    for(int i=0;i<s.size();i++){
        if(v[s[i]]<v[s[i+1]]){
            result-=v[s[i]];
        }
        else{
            result+=v[s[i]];
        }
    }
    return result;
}

int main() {
    string s="III";
     cout<<RomanToInteger(s);
    
    //Call Func
	// your code goes here
	return 0;
}
 