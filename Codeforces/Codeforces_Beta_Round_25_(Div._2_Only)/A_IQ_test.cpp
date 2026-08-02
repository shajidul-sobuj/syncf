/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 25A - IQ_test
 * Link: https://codeforces.com/contest/25/problem/A
 * Submission ID: 358885982
 * Language: C++17 (GCC 7-32)
 * Execution Time: 92 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1300 | Tags: brute force
 * Submitted At: Tue, 20 Jan 2026 08:17:50 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int oc = 0;
    int ec = 0;
    for (int i=1;i<=n;i++)
    {
        if (a[i]%2==0) ec++;
        if (a[i]%2!=0) oc++;
    }
    int idx;
    if (ec>oc) 
    {
        for (int i=1;i<=n;i++)
        {
            if (a[i]%2!=0) 
            {
                cout << i << endl;
                return 0;
            }
        }
    }else 
    {
        for (int i=1;i<=n;i++)
        {
            if (a[i]%2==0) 
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    return 0;
}