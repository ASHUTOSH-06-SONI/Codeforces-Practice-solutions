#include<iostream>
#include<vector>
#include<climits>
using namespace std;
#define vi vector<int>
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vi arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int last=0;
        int ans= INT_MIN;
        for(int j=0; j<n;j++){
            ans=max(ans, arr[j]-last);
            last= arr[j];
        }
        ans = max(ans, 2*(x-last));
        cout<<ans<<"\n";
    }
}
int main(){
    solve();
    return 0;
}


/* first test case
3 7
1 2 5
0 1 2  5  7 
first 1 unit is consumed
and at every fuel station we refuel the tank completely
so 0 to 1 1 litre is consumed then 1 to 2  again 1 litre is consumed
2-5, 3 litres is consumed
and from 5 to 7 again 2 litres is consumed
at 5 i refuel such that i go to 7 and comeback again
so 4 liters 
*/

/* second example case
0 to 10
0       1         4          6        7                      10
1 litre 3 litres   2 litres  1 litres  3 litres+ 3 litres 
so the last lap is what we need to take into account 
minimum we need is the amount from second last to last point times 2
hence
2*(x-an)
*/