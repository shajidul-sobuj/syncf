/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2182A - New_Year_String
 * Link: https://codeforces.com/contest/2182/problem/A
 * Submission ID: 355726871
 * Language: C++17 (GCC 7-32)
 * Execution Time: 93 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms, greedy, implementation, strings
 * Submitted At: Mon, 29 Dec 2025 14:53:56 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            
            int opt1 = 0;
            for (int i = 0; i + 3 < n; i++) {
                if (s[i] == &#39;2&#39; && s[i+1] == &#39;0&#39; && s[i+2] == &#39;2&#39; && s[i+3] == &#39;5&#39;) {
                    opt1++;
                }
            }
            
            int opt2 = n; 
            for (int i = 0; i + 3 < n; i++) {
                int curr = 0;
                if (s[i] != &#39;2&#39;) curr++;
                if (s[i+1] != &#39;0&#39;) curr++;
                if (s[i+2] != &#39;2&#39;) curr++;
                if (s[i+3] != &#39;6&#39;) curr++;
                
                if (curr < opt2) opt2 = curr;
            }
            
            if (opt1 < opt2) cout << opt1 << "\n";
            else cout << opt2 << "\n";
        }
    }
    return 0;
}