/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2191D1 - Sub-RBS__Easy_Version_
 * Link: https://codeforces.com/contest/2191/problem/D1
 * Submission ID: 358359707
 * Language: C++17 (GCC 7-32)
 * Execution Time: 78 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1400 | Tags: constructive algorithms
 * Submitted At: Sat, 17 Jan 2026 17:06:18 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int r_par = 0;
        int ans = -1;

        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == &#39;(&#39;) {
                r_par++;
            } else {
                if (r_par >= 2) {
                    ans = n - 2;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}