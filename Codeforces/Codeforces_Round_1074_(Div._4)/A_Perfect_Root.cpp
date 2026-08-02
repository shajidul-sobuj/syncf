/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2185A - Perfect_Root
 * Link: https://codeforces.com/contest/2185/problem/A
 * Submission ID: 358504640
 * Language: C++17 (GCC 7-32)
 * Execution Time: 31 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms, math
 * Submitted At: Sun, 18 Jan 2026 14:48:17 GMT
 */

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