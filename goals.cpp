#include<iostream>
#include<vector>
#include <numeric> 
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n-1);
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        int sum= std::accumulate(arr.begin(),arr.end(),0);
        cout<<-sum<<endl;
    }
}
int main(){
    solve();
    return 0;
}