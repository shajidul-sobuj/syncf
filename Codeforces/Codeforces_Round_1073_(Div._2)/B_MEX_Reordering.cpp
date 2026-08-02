/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2191B - MEX_Reordering
 * Link: https://codeforces.com/contest/2191/problem/B
 * Submission ID: 358297464
 * Language: C++17 (GCC 7-32)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1000 | Tags: constructive algorithms, sortings
 * Submitted At: Sat, 17 Jan 2026 15:10:21 GMT
 */

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