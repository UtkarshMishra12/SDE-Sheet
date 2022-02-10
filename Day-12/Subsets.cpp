#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

vector <vector<int>> ans;
void subSet1(vector <int>&arr){
    int n=arr.size();
    int p=1>>n;
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            if((i<<j)&1){
                ans[i].push_back(arr[j]);
                
            }
        }
    }
}

vector <vector<int>> res;
vector<int> cur;
void subSet2(vector<int> &arr,int idx){
    res.push_back(cur);
    for(int i=idx;i<arr.size();i++){
        cur.push_back(arr[i]);
        subSet2(arr,idx+1);
        cur.pop_back();
    }
}

int main() {
    vector <int> v={1,2,3};
    subSet1(v);
    subSet2(v,0);
    //Call Func
	// your code goes here
	return 0;
}
 