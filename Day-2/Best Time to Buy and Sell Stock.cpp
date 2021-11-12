#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int maxProfit(vector<int>& v) {
        /*int minprice = INT_MAX;
        int maxprofit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minprice)
                minprice = prices[i];
            else if (prices[i] - minprice > maxprofit)
                maxprofit = prices[i] - minprice;
        }
        return maxprofit;*/
        int minPri=INT_MAX;
        int maxPro=0;
        for(int i=0;i<v.size();i++){
            minPri=min(minPri,v[i]);
            maxPro=max(maxPro,v[i]-minPri);
        }
        return maxPro;
    }


int main() {
    vector <int> v={7,1,5,3,6,4};
    cout<<maxProfit(v);
    
    //Call Func
	// your code goes here
	return 0;
}
 