#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i]
    }
    int least = arr[0];

    // Find the least number
    for (int i = 1; i < n; i++) {
        if (arr[i] < least) {
            least = arr[i];
        }
    }cout<<least<<endl;
}
int main(){
    solve();
    return 0;
}


//we can just check for the least element in the array and 
//that will be the minimum number of ops to make the final answer as 0