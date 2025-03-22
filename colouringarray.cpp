#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0; i<n;i++){
            cin>>a[i];
            sum +=a[i];
        }
        if(sum%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
int main(){
    solve();
    return 0;
}