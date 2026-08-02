/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2191C - Sorting_Game
 * Link: https://codeforces.com/contest/2191/problem/C
 * Submission ID: 358318566
 * Language: C++17 (GCC 7-32)
 * Execution Time: 93 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1200 | Tags: games
 * Submitted At: Sat, 17 Jan 2026 15:38:22 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (is_sorted(s.begin(), s.end())) {
            cout << "Bob\n";
            continue;
        }

        int cnt0 = 0;
        for (char ch : s) if (ch == &#39;0&#39;) cnt0++;

        vector<int> pos;
        for (int i = 0; i < cnt0; i++) {
            if (s[i] == &#39;1&#39;) pos.push_back(i + 1);
        }
        for (int i = cnt0; i < n; i++) {
            if (s[i] == &#39;0&#39;) pos.push_back(i + 1);
        }

        cout << "Alice\n";
        cout << pos.size() << endl;
        for (int v : pos) cout << v << " ";
        cout << endl;
    }
    return 0;
}