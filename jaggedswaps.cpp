#include<iostream>
#include<vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        if (v[0] != 1) { 
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}


/*
so index i belongs from 2 to n-1
given that if a[i-1]<a[i]>a[i+1] then we swap the elements a[i] and a[i+1]
eg for an array
1 3 5 2 4
1 3 2 5 4 
1 3 2 4 5
1 2 3 4 5
if 1 is at its position  then we can sort this array easily
because the operation that we do is concerned with the largest element 
*/