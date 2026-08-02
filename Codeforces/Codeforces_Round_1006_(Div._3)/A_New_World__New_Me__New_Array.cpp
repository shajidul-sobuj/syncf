/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2072A - New_World__New_Me__New_Array
 * Link: https://codeforces.com/contest/2072/problem/A
 * Submission ID: 363673952
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, implementation, math
 * Submitted At: Fri, 20 Feb 2026 09:04:12 GMT
 * 
 * --- AI Analysis ---
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 * Explanation: This code uses a constant amount of time and space to solve the problem, regardless of the input size. It directly calculates the result based on the given conditions without any loops or recursive calls.
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,p;
    cin >> n >> k >> p;
    if (k==0) {
        cout << 0 << endl;
        return;
    }
    int ans;
    if (abs(k)%p==0 && abs(k)/p<=n)
    {
        cout << abs(k)/p << endl;
    }else if (abs(k)%p!=0 && (abs(k)/p)+1<=n)
    {
        cout << (abs(k)/p)+1 << endl;
    }else{
        cout << -1 << endl;
    }
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