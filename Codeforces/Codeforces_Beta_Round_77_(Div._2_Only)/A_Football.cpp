/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 96A - Football
 * Link: https://codeforces.com/contest/96/problem/A
 * Submission ID: 358731068
 * Language: C++17 (GCC 7-32)
 * Execution Time: 92 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 900 | Tags: implementation, strings
 * Submitted At: Mon, 19 Jan 2026 09:35:57 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool isDanger = false;
    if(s.size()<7) 
    {
        cout << "NO\n";
        return 0;
    }
    for (int i=0;i<s.size()-6;i++)
    {
        if ((s[i]==s[i+1]) && (s[i]==s[i+2]) && (s[i]==s[i+3]) && (s[i]==s[i+4]) && (s[i]==s[i+5]) && (s[i]==s[i+6]))
        {
            isDanger = true;
            break;
        }
    }
    (isDanger) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}