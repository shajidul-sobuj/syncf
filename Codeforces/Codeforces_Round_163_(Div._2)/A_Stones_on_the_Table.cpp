/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 266A - Stones_on_the_Table
 * Link: https://codeforces.com/contest/266/problem/A
 * Submission ID: 354647393
 * Language: C++17 (GCC 7-32)
 * Execution Time: 92 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: Tue, 23 Dec 2025 06:27:54 GMT
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count=0;
    for (int i=0;i<n-1;i++){
        if (s[i]==s[i+1]) count++;
    }
    cout << count << endl;
    return 0;
}