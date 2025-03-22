#include <iostream>
#include <vector>
#include <map>
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

        map<int, int> mp;
        for (auto a : arr) {
            mp[a]++;
        }

        if (mp.size() == 1) {
            // All elements are the same
            cout << -1 << endl;
        } else {
            // Since map is sorted by keys, the first element is the smallest
            int ele = begin(mp)->first;  // Smallest key
            int freq = begin(mp)->second;  // Frequency of smallest key

            // Printing lb and lc
            cout << freq << " " << n - freq << endl;

            // Printing b
            for (int i = 0; i < freq; i++) {
                cout << ele << ' ';  
            }
            cout << endl;

            mp.erase(ele);  // Delete entries with this key

            for (const auto& p : mp) {
                int e = p.first;
                int f = p.second;
                for (int i = 0; i < f; i++) {
                    cout << e << ' ';
                }
            }
            cout << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
