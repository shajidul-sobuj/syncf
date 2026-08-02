/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2074A - Draw_a_Square
 * Link: https://codeforces.com/contest/2074/problem/A
 * Submission ID: 363593991
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: geometry, implementation
 * Submitted At: Thu, 19 Feb 2026 10:52:09 GMT
 * 
 * --- AI Analysis ---
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 * Explanation: This code checks if four given numbers represent the sides of a square by verifying if all sides are equal. It uses a simple if-else condition to determine whether the input numbers form a square or not.
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a==b && b == c && c == d) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}