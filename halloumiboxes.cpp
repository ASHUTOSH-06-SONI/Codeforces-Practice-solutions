#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(k==1 && !is_sorted(v.begin(),v.end())){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
    }
}
int main(){
    solve();
    return 0;
}
/*
an array is of size n
and then we reverse a sub array of max size k
and this can be done any num of times 
eg- k=3 so we can pick a sub arr of size 2 and reverse it or sub arr of size 3 and reverse it
n,k- length of array ; number of times for reversing
so if array can be sorted in non decreasing order we print yes else no 
test case
n=4 k=3 
10 3 830 14
so 3 10 14 830
yes it can be reversed

another test case
n=2 k=1
3 1
if k=1 array has to be sorted 
yes only if the array is sorted
*/