#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

double myPow(double x, int n) {
        //return pow(x,n);
        bool flag = n < 0;
        double res = 1;
        while (n != 0)
        {
        if (n % 2)
            res = res * x;
        x = x * x;
        n /= 2;
            
        }
        return flag ?1/res:res; 
    
}

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 