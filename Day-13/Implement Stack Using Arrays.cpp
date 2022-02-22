#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back


//Implement Stack 
int arr[5];
int top=-1;

void push(int x){
    arr[++top]=x;
}

void pop(){
    top--;
}

void topp(){
    //return 
    cout<<arr[top]<<endl;
}

void size(){
    //return 
    cout<<top+1<<endl;
}

void isempty(){
    if(top==-1) cout<<1<<endl;
    else 
       cout<<-1<<endl;
}


int main() {
    push(1);
    push(2);
    push(3);
    pop();
    topp();
    push(4);
    pop();
    size();
    isempty();
    
    //Call Func
	// your code goes here
	return 0;
}
 