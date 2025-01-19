#include <iostream>
#include <vector>
using namespace std;

bool canMakeNonDecreasing(vector<int>& a, int n) {
    // Traverse through the array and check if it is non-decreasing
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            return false;  // Sequence is decreasing at some point
        }
    }
    return true;  // The sequence is non-decreasing
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (canMakeNonDecreasing(a, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
