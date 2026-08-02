/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 1676B - Equal_Candies
 * Link: https://codeforces.com/contest/1676/problem/B
 * Submission ID: 353289440
 * Language: C++17 (GCC 7-32)
 * Execution Time: 78 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, math, sortings
 * Submitted At: Sat, 13 Dec 2025 08:04:09 GMT
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int mn = INT_MAX;
        for (int i=0;i<n;i++) 
        {
            cin >> a[i];
            mn = min(mn,a[i]);
        }
        long long sum=0;
        for (int i=0;i<n;i++) 
        {
            int x = a[i]-mn;
            sum+=x;
        }
        cout << sum << endl;

    }
    return 0;
}