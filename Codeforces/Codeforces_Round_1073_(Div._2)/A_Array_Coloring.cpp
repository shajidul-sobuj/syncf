// Code fetched by CPRepo (https://cprepo.vercel.app)
// Platform: codeforces | Problem: 2191A - Array Coloring

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        bool no = false;
        for (int i = 0; i < n - 1; ++i) {
            if ((arr[i] % 2) == (arr[i+1] % 2)) {
                cout << "NO" << "\n";
                no = true;
                break;
            }
        }
        if (!no)
            cout << "YES" << "\n";
    }
    return 0;
}