#include<iostream>
#include<string>
using namespace std;
void solve(){
    int t;
    cin>>t;//number of test cases
    while(t--){
        int n,m;  // n is the length of x and m is the length of s
        cin>>n>>m;
        string x,s; 
        cin>>x>>s;
        /*
        a pattern here is this- a -> aa -> aaaa -> aaaaaaaa -> 16 -> 32 
        so in 5 ops our string size becomes 32
        so if even in 5 ops we dont get s, then we print -1 
        else we print after how many operations it takes that is from 0 to 5 
        */
       bool found= false;
        for(int ops = 0; ops<=5;ops++){
            if(x.find(s)!=string::npos){
                cout<<ops<<endl;
                found=true;
                break;
            }
            x.append(x);
            //apply operation
        }
        if(!found)cout<<-1<<endl;
    }   
}


int main(){
    solve();
    return 0;
}