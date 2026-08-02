/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 110A - Nearly_Lucky_Number
 * Link: https://codeforces.com/contest/110/problem/A
 * Submission ID: 357100720
 * Language: C++17 (GCC 7-32)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: Fri, 09 Jan 2026 15:07:00 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for (char c : s) {
        if (c == &#39;4&#39; || c == &#39;7&#39;) {
            cnt++;
        }
    }
    if (cnt == 0) {
        cout << "NO\n";
        return 0;
    }
    while (cnt > 0) {
        int d = cnt % 10;
        if (d != 4 && d != 7) {
            cout << "NO\n";
            return 0;
        }
        cnt = cnt/10;
    }
    cout << "YES\n";

    return 0;
}
