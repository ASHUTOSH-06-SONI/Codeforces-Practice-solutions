#include <iostream>
#include <vector>
#include <climits>
#include <algorithm> 
using namespace std;
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        // If already unsorted, no ops 
        if (!is_sorted(arr.begin(), arr.end())) {
            cout << 0 << endl;
            continue;
        }
        // If array has only one element, it is sorted so this is also base case
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        //actual number of operations
        int diff = INT_MAX;
        for (int j = 1; j < n; j++) {
            diff = min(diff, arr[j] - arr[j - 1]);
        }
        int ops = diff / 2 + 1;
        cout << ops << endl;
    }
}
int main() {
    solve();
    return 0;
}
