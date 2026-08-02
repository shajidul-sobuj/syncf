/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2188A - Divisible_Permutation
 * Link: https://codeforces.com/contest/2188/problem/A
 * Submission ID: 362010631
 * Language: C++17 (GCC 7-32)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms
 * Submitted At: Sun, 08 Feb 2026 13:32:04 GMT
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i=n-2,val=n; i>=0; i=i-2,val--)
    {
        a[i] = val;
    }
    for (int i=n-1,val=1; i>=0; i=i-2,val++)
    {
        a[i] = val;
    }
    for (int x : a)
    {
        cout << x << " ";
    }
    cout << endl;
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