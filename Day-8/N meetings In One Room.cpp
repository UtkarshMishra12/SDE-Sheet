#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

struct meeting{
    int strt;
    int end;
    int pos;
};

bool comparator(struct meeting m1, meeting m2){
    if(m1.end < m2.end) return true;
    else if(m1.end > m2.end) return false;
    else if(m1.pos < m2.pos) return true;
    else return false;
}

void nMeeting(int s[], int e[], int n){
    struct meeting meet[n];
    for(int i=0;i<n;i++){
        meet[i].strt=s[i], meet[i].end=e[i], meet[i].pos=i+1;
    }
    sort(meet,meet+n,comparator);
    vector <int> ans;
    int limit=meet[0].end;
    ans.push_back(meet[0].pos);
    for(int i=1;i<n;i++){
        if(meet[i].strt > limit ){
            limit=meet[i].end;
            ans.push_back(meet[i].pos);
        }
        
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}

int main() {
    int start[]={1,3,0,5,8,5},end[] =  {2,4,6,7,9,9};
    int n=6;
    nMeeting(start,end,n);
    
    //Call Func
	// your code goes here
	return 0;
}
 