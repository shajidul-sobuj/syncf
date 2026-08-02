/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 339A - Helpful_Maths
 * Link: https://codeforces.com/contest/339/problem/A
 * Submission ID: 354434194
 * Language: C++17 (GCC 7-32)
 * Execution Time: 92 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, implementation, sortings, strings
 * Submitted At: Sun, 21 Dec 2025 12:30:26 GMT
 */

#include <bits/stdc++.h>using namespace std;int main() {    string s;    cin >> s;    sort(s.begin(),s.end());    // cout << s[0];    for (int i=0;i<s.size()-1;i++) {       if (s[i]>='1' && s[i]<='9') {            cout << s[i];            cout << "+";       }    }    cout << s[s.size()-1] << endl;    return 0;}