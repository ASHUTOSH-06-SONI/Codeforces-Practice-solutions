#include<iostream>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b){
            cout<<"First"<<endl;
        }
        else if (b>a)
        {
            cout<<"Second"<<endl;
        }
        else if (a==b)
        {
            if(c%2==0){
                cout<<"Second"<<endl;
            }
            else{
                cout<<"First"<<endl;
            }
        }
    }
}
int main(){
    solve();
    return 0;
}