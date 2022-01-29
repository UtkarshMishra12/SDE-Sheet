#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

void func(int ind,int sum,vector <int> &arr,vector<int> &sumsubset,int N){
    if(ind==N){
        sumsubset.push_back(sum);
        return;
    }
    
    //Include the first number
    func(ind+1,sum+arr[ind],arr,sumsubset,N);
    
    //Exclude the first number
    func(ind+1,sum,arr,sumsubset,N);
}

int main() {
    vector <int> arr={3,1,2};
    int n=arr.size();
    vector <int> sumsubset;
    func(0,0,arr,sumsubset,n);
    sort(sumsubset.begin(),sumsubset.end());
    for(auto i:sumsubset){
        cout<<i<<" ";
    }
    //Call Func
	// your code goes here
	return 0;
}
 