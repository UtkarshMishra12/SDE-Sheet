#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

vector<vector<int>> merge(vector<vector<int>>& intervals){
    vector<vector<int>> mergerdIntervals;
    if(intervals.size()==0){
        return intervals;
    }
    sort(intervals.begin(),intervals.end());
    vector <int> tempInterval= intervals[0];
    
    for(auto it:intervals){
        if(it[0] <= tempInterval[1]){
            tempInterval[1]=max(it[1],tempInterval[1]);
        }
        else{
            mergerdIntervals.pb(tempInterval);
            tempInterval=it;
        }
    }
    mergerdIntervals.pb(tempInterval);
    return mergerdIntervals;
}


int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 