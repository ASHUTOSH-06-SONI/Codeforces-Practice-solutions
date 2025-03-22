#include<iostream>
using namespace std;
int t;
cin>>t;
while(t--){
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        //we print yes and number of 1s which make up n value 
    }
    else if(x==1){
        if(k==1){
            cout<<"No"<<endl;
        }
        if(k==2){
            if(n%2==0){
                cout<<"Yes"<<endl;
                // now here the number of times we print an integer such that it adds up to n
                // is basically n/2 times
            }
            else{
                cout<<"No"<<endl;
                
            }
        }
        
    }

}