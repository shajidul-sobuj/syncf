/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2178A - Yes_or_Yes
 * Link: https://codeforces.com/contest/2178/problem/A
 * Submission ID: 355346187
 * Language: C++17 (GCC 7-32)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, strings
 * Submitted At: Sat, 27 Dec 2025 15:05:41 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int freq = 0;
        for (char c : s) {
            if (c == &#39;Y&#39;) {
                freq++;
            }
        }
        
        if (freq <= 1) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
