#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int c0 = 0;
        int c1 = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x == 0) c0++;
            if (x == 1) c1++;
        }

        if (c0 == 0) {
            cout << "NO" << "\n";
        } else if (c0 > 1 && c1 == 0) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }
    return 0;
}