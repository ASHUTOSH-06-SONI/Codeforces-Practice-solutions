#include<iostream>
#include<string>
using namespace std;
int main(){
    int x;
    cin>>x;
    string result;
    for(int i=0; i<x;i++){
        string temp;
        cin>>temp;
        if(temp.size()>10){
            result +=temp[0]+ to_string(temp.size()-2) +temp[temp.size()-1]+"\n";
        }
        else{
            result += temp +"\n";
        }
    }
    cout << result << endl;
    return 0; 
}