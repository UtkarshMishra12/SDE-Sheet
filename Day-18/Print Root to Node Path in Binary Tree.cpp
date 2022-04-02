#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

class node{
    public:
    int val;
    node *left;
    node* right;

};

bool find(node *root, vector<int>&arr, int x){
    if(root==NULL) return false;
    
    arr.push_back(root->val);
    if(root->val==x) return true;
    
    if (find(root->left,arr,x) || find(root->right,arr,x) )return true;
    
    arr.pop_back();
    return false;
}

bool path(node *root, int B){
    vector <int> arr;
    if(root==NULL) arr;
    find(root,arr,B);
}

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 