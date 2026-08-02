/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 1792A - GamingForces
 * Link: https://codeforces.com/contest/1792/problem/A
 * Submission ID: 363671083
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: greedy, sortings
 * Submitted At: Fri, 20 Feb 2026 08:17:30 GMT
 * 
 * --- AI Analysis ---
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * Explanation: This code uses a single pass through the input array to count the number of 1s and non-1s, then calculates the minimum number of operations required to make all elements equal. The time complexity is linear due to the single pass, and the space complexity is linear because of the input array.
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i=0;i<n;i++) cin >> a[i];
    int ans = 0;
    int count_one = 0;
    for (int x : a)
    {
        if (x == 1) count_one++;
        else ans++;
    }
    if (count_one%2==0) ans+=(count_one/2);
    else ans+=(count_one/2)+1;
    cout << ans << endl;
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