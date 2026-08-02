/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2194B - Offshores
 * Link: https://codeforces.com/contest/2194/problem/B
 * Submission ID: 361975288
 * Language: C++17 (GCC 7-32)
 * Execution Time: 375 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1000 | Tags: greedy, implementation, math
 * Submitted At: Sun, 08 Feb 2026 10:07:14 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            long long x, y;
            cin >> n >> x >> y;
            vector<long long> a(n);
            long long s = 0;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                s += (a[i] / x) * y;
            }
            long long m = 0;
            for (long long v : a) {
                m = max(m, v + s - (v / x) * y);
            }
            cout << m << "\n";
        }
    }
    return 0;
}