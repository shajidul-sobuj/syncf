/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2173A - Sleeping_Through_Classes
 * Link: https://codeforces.com/contest/2173/problem/A
 * Submission ID: 362313415
 * Language: C++17 (GCC 7-32)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, implementation
 * Submitted At: Tue, 10 Feb 2026 17:54:54 GMT
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    string v;
    cin >> v;
    int test = 0;
    int count = 0;
    for (int i=0;i<n;i++)
    {
        if (v[i] == &#39;0&#39; && test == 0 )
        {
            count++;
        }else if (v[i] == &#39;1&#39;)
        {
            test = k;
        }else if (v[i] == &#39;0&#39; && test != 0 )
        {
            test--;
        }
    }
    cout << count << endl;
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