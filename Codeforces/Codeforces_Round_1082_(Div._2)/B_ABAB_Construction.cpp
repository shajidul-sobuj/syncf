/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2202B - ABAB_Construction
 * Link: https://codeforces.com/contest/2202/problem/B
 * Submission ID: 364078540
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1200 | Tags: dp, greedy, implementation
 * Submitted At: Mon, 23 Feb 2026 15:51:34 GMT
 * 
 * --- AI Analysis ---
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * Explanation: This code uses a simple iterative approach to check if a given string can be constructed as an ABAB string. It iterates over the string, checking for any pairs of characters that are not both '?' or not equal to each other, and also checks if the string length is odd and the first character is 'b'.
 */

#include <bits/stdc++.h>
using namespace std;

void hlw() {
    int n;
    string s;
    cin >> n >> s;

    if (n%2 != 0 && s[0] == &#39;b&#39;) {
        cout << "NO\n";
        return;
    }

    for (int i=(n%2);i+1<n;i+=2) {
        if (s[i] != &#39;?&#39; && s[i+1] != &#39;?&#39; && s[i] == s[i+1]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        hlw();
    }
}