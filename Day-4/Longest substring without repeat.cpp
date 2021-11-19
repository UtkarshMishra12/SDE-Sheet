#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int lengthOfLongestSubstring(string s){
    vector <int> v(256,-1);
    int l=0,r=0;
    int n=s.size(),len=0;
    while(r<n){
        if(v[s[r]]!=-1){
            l=max(v[s[r]]+1,l);
        }
        v[s[r]]=r;
        len=max(r-l+1,len);
        r++;
    }
    return len;
}

int main() {
    string s("abcdefababcdefghi");
    cout<<lengthOfLongestSubstring(s);
    //Call Func
	// your code goes here
	return 0;
}
 