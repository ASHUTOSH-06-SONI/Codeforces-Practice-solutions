#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
void solve(){
    // if k is part of the array yes else no
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(std::find(arr.begin(), arr.end(), k) != arr.end()){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    } 
}
int main(){
    solve();
    return 0;
}
