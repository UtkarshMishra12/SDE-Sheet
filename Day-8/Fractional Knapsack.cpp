#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

class Item{
    public:
    int value;
    int weight;
};

bool comparator(Item a, Item b){
    double r1= (double)a.value/(double)a.weight;
    double r2= (double)b.value/(double)b.weight;
    return r1>r2;
}

int fractionalKnapsack(int W,int v[],int w[],int n){
    class Item arr[n];
    for(int i=0;i<n;i++){
        arr[i].value=v[i], arr[i].weight=w[i];
    }
    sort(arr,arr+n,comparator);
    
    int cur=0;
    double final=0;
    
    for(int i=0;i<n;i++){
        if(cur+arr[i].weight <=W){
            cur+=arr[i].weight;
            final+=arr[i].value;
        }
        else{
            int remain=W-cur;
            final+=(arr[i].value/(double)arr[i].weight)*remain;
            break;
        }
    }
    return final;
}

int main() {
    int N = 3, W = 50;
    int values[] = {60,100,120};
    int weight[] = {10,20,30};
    cout<<fractionalKnapsack(W,values,weight,N);
    
    //Call Func
	// your code goes here
	return 0;
}
 