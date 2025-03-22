#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    string s;
    cin >> s;
    // Extract numbers
    string numbers;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            numbers += s[i];
        }
    }
    // Sort numbers
    sort(numbers.begin(), numbers.end());
    // Print sorted sum
    for (size_t i = 0; i < numbers.size(); i++) {
        if (i > 0) cout << "+";
        cout << numbers[i];
    }
    cout << endl;
}
int main() {
    solve();
    return 0;
}
