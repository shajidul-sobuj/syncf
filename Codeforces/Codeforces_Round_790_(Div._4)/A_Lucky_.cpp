/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 1676A - Lucky_
 * Link: https://codeforces.com/contest/1676/problem/A
 * Submission ID: 352997870
 * Language: C++17 (GCC 7-32)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: Thu, 11 Dec 2025 12:24:05 GMT
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long int sum1=0;
        for (int i=0;i<3;i++) {
            sum1+=s[i];
        }
        long long int sum2=0;
        for (int i=3;i<6;i++) {
            sum2+=s[i];
        }
        bool is = (sum1==sum2);
        cout << (is ? "YES\n" : "NO\n");
    }

    return 0;
}