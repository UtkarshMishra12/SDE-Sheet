#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

void insert(stack<int>&s, int temp){
    if(s.empty()|| s.top()<temp){
        s.push(temp);
        return;
    }
    int val= s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
    return;
}

void sortStack(stack<int>& s){
    // base case
    if(s.size()==0 || s.size()==1){
        return;
    }
    int temp= s.top();
    s.pop();
    sortStack(s);
    insert(s,temp);
    return;
}

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 