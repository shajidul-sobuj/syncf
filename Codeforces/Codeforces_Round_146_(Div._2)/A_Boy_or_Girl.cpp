/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 236A - Boy_or_Girl
 * Link: https://codeforces.com/contest/236/problem/A
 * Submission ID: 360099849
 * Language: C++17 (GCC 7-32)
 * Execution Time: 92 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: brute force, implementation, strings
 * Submitted At: Tue, 27 Jan 2026 07:22:50 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i=0;i<s.size()-1;i++)
    {
        bool isUnique = false;
        for (int j=i+1;j<s.size();j++)
        {
            if (s[i]==s[j]){
                s[j]=0;
            }
        }
    }
    int count = 0;
    for (int i=0;i<s.size();i++)
    {
        if((s[i]!=0) && (s[i]>=&#39;a&#39; && s[i]<=&#39;z&#39;)) count++;
    }
    if (count%2!=0) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";
    return 0;
}