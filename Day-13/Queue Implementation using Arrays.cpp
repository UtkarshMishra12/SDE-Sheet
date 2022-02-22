#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back


//Implement Queue
vector <int> arr(5);
int n=arr.size();
int front=0;
int rear=0;
int cnt=0;

void push(int x){
    if(cnt==n) cout<<-1;
    arr[rear%n]=x;
    cnt++;
    rear++;
}

void pop(){
    if(cnt==0)  cout<<"No elements";
    arr[front%n]=-1;
    front++;
    cnt--;
}

void top(){
    if(cnt==0) cout<<"Empty";
    cout<<arr[front%n];
}



int main() {
    push(1);
    push(2);
    push(3);
    pop();
    top();
    push(4);
    top();
    pop();
    
    
    //Call Func
	// your code goes here
	return 0;
}
 