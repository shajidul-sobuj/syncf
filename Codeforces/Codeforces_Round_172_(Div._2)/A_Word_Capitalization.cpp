/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 281A - Word_Capitalization
 * Link: https://codeforces.com/contest/281/problem/A
 * Submission ID: 354576833
 * Language: C++17 (GCC 7-32)
 * Execution Time: 92 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation, strings
 * Submitted At: Mon, 22 Dec 2025 14:52:12 GMT
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s << endl;
    return 0;
}