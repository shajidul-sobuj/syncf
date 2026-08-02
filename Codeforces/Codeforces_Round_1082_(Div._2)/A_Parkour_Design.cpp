/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2202A - Parkour_Design
 * Link: https://codeforces.com/contest/2202/problem/A
 * Submission ID: 364097254
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: math
 * Submitted At: Mon, 23 Feb 2026 16:45:07 GMT
 * 
 * --- AI Analysis ---
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 * Explanation: This code uses a constant amount of time and space to check the validity of a parkour design, represented by two integers x and y. It checks if the design can be constructed by verifying a set of conditions based on the values of x and y.
 */

#include <bits/stdc++.h>
using namespace std;

void hello() {
    long long x, y;
    cin >> x >> y;

    long long val = x-2*y;

    if (val%3 != 0) {
        cout << "NO\n";
        return;
    }

    if (y >= 0) {
        if (x < 2*y) {
            cout << "NO\n";
            return;
        }
    } 
    else {
        if (x < (-4*y)) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        hello();
    }
}