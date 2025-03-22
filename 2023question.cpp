#include <iostream>
#include <vector>

using namespace std;

bool findSequenceA(const vector<int>& b, int k, vector<int>& a) {
    // Check if the product of elements in b is equal to 2023
    long long product_b = 1;
    for (int num : b) {
        product_b *= num;
    }
    if (product_b != 2023) {
        return false; // Product of elements in b is not 2023
    }

    // Construct sequence a
    a.clear();
    a.push_back(2023);
    for (int i = 0; i < k; ++i) {
        a.push_back(1);
    }

    // Check if b is a subsequence of a
    int j = 0; // Index for sequence b
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == b[j]) {
            j++;
            if (j == b.size()) {
                return true; // b is a subsequence of a
            }
        }
    }

    return false; // b is not a subsequence of a
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<int> a;
        if (findSequenceA(b, k, a)) {
            cout << "YES" << endl;
            for (int num : a) {
                cout << num << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}