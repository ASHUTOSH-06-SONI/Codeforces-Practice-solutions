#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; 
        string s;
        cin>>s;
        int e=0;
        bool f=true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                e+=1;
            }
            if(i>0 && i<n-1){
                if (s[i-1]=='.' && s[i]=='.' && s[i+1]=='.')
            {
                cout<<2<<"\n";
                f=false;
                break; 
            }
            }
            if(f){
                cout<<e<<"\n";
            }
        }
    }
}
int main(){
    solve();
    return 0;
}