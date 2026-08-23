#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            for (int i = 1; i < n; i++) {
                cout << i << " ";
            }
            cout << n << endl;
        }
    }
    return 0;
}