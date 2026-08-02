/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2002A - Distanced_Coloring
 * Link: https://codeforces.com/contest/2002/problem/A
 * Submission ID: 363609436
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms, implementation, math
 * Submitted At: Thu, 19 Feb 2026 13:30:43 GMT
 * 
 * --- AI Analysis ---
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 * Explanation: This code solves the Distanced Coloring problem by directly calculating the minimum of the product of the number of nodes (n) and the number of edges (m) with the given distance (k), without requiring any additional space or operations that scale with the input size.
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
        long long int n, m, k;
        cin >> n >> m >> k;
        long long int ans = min(n,k)*min(m,k);
        cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }

    return 0;
}
