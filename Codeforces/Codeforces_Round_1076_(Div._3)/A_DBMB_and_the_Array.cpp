/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2193A - DBMB_and_the_Array
 * Link: https://codeforces.com/contest/2193/problem/A
 * Submission ID: 359776354
 * Language: C++17 (GCC 7-32)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: brute force, math
 * Submitted At: Sun, 25 Jan 2026 14:58:53 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
        }

        if (s >= sum && (s - sum) % x == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
