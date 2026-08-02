/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 1703A - YES_or_YES_
 * Link: https://codeforces.com/contest/1703/problem/A
 * Submission ID: 359078446
 * Language: C++17 (GCC 7-32)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: brute force, implementation, strings
 * Submitted At: Wed, 21 Jan 2026 14:32:36 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == &#39;y&#39; || s[0] == &#39;Y&#39;)
        {
            if (s[1] == &#39;e&#39; || s[1] == &#39;E&#39;)
            {
                if (s[2] == &#39;s&#39; || s[2] == &#39;S&#39;)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}