#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>b(n);
        // taking the input as array b
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int>ans;
        ans.push_back(b[0]);  // copy the first element as it is as per the rule
        //to print the rest of the array for answer
        for(int j=1; j<n;j++){
            if(b[j]>=b[j-1]){
                ans.push_back(b[j]);
            }
            else{
                ans.push_back(b[j]);
                ans.push_back(b[j]);
            }
        }
        cout<<ans.size()<<endl;
        for(auto x: ans){
            cout<<x<<" ";
        }
        cout << endl;
    }
}
int main(){
    solve();
    return 0;
}