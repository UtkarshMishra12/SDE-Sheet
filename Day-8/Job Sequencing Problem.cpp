#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

class Job{
    public:
    int id;
    int dead;
    int profit;
};

bool comparison(Job a, Job b){
    return a.profit > b.profit;
}

pair<int,int> jobSequencing(Job arr[], int n){
    sort(arr,arr+n,comparison);
    int maxi=arr[0].dead;
    for(int i=1;i<n;i++){
        maxi=max(maxi,arr[0].dead);
    }
    int slot[maxi+1];
    for(int i=0;i<=maxi;i++){
        slot[i]=-1;
    }
    int cntJob=0, maxProfit=0;
    
    for(int i=0;i<n;i++){
        for(int j=arr[i].dead;j>0;j--){
            if(slot[j]==-1){
                slot[j]=i;
                maxProfit+=arr[j].profit;
                cntJob++;
                break;
            }
        }
    }
    cout<<cntJob<<" "<<maxProfit;
    return make_pair(cntJob,maxProfit);
}

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 