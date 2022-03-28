#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back


 bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        return s==t;            
    }
    
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        
		unordered_map <char, int> umap;
        for (char c:s) umap[c]++;
        for(char c:t) {
            umap[c]--;
            if (umap[c]<0) return false;
        }
        
        return true;
                    
    }
    
     bool isAnagram(string s, string t) {
        int h1[300]={0};
        int h2[300]={0};
        for(int i=0;i<s.size();i++){
            h1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            h2[t[i]]++;
        }
        //int c=0;
        for(int i=97;i<=122;i++){
            if(h1[i]!=h2[i]){
                //c++;
                //break;
                return false;
            }
        }
        /*if(c==0){
            return true;
        }
        else{
            return false;
        }*/
        return true;
    }


int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 