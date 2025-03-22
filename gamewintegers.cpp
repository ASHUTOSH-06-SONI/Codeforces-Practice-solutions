#include<iostream>
using namespace std;
//vova will make the number divisible by 3 before vanya's move
//if the current number leaves a remainder of 1 or 2 when div by 3 
//then vanya wins in 2 move (increment for 2 decrement for 1)
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3==0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
}
int main(){
    solve();
    return 0;
}