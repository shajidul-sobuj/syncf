/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 1873A - Short_Sort
 * Link: https://codeforces.com/contest/1873/problem/A
 * Submission ID: 359079008
 * Language: C++17 (GCC 7-32)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: brute force, implementation
 * Submitted At: Wed, 21 Jan 2026 14:36:50 GMT
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
        bool ok = (s == "abc");
        for (int i = 0; i < 3 && !ok; i++)
        {
            for (int j = i + 1; j < 3 && !ok; j++)
            {
                string temp = s;
                swap(temp[i], temp[j]);
                if (temp == "abc")
                {
                    ok = true;
                }
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
