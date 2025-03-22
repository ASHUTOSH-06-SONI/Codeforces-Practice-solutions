#include<iostream>
using namespace std;
int main(){
    //number of games
    int x;
    cin>>x;
    while (x--)
    {
        int n;
        cin>>n;
        if(n%2==0){
            cout<<"Sakurako"<<endl;
        }
        else{
            cout<<"Kosuke"<<endl;  
    }
    }
    return 0;
}