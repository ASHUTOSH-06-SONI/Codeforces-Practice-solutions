#include<iostream>
using namespace std;
void solve(){
    int t;
    cin>>t;
    int board[10][10]={
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };
    while(t--){
        int total=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char ch;
                cin>>ch;
                if(ch!='.'){
                    total+=board[i][j];
                }
            }
        }
        cout<<total<<endl;
    }
}
int main(){
    solve();
    return 0;
}