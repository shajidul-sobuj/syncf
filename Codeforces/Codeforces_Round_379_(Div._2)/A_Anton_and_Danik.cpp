/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 734A - Anton_and_Danik
 * Link: https://codeforces.com/contest/734/problem/A
 * Submission ID: 352757262
 * Language: C++17 (GCC 7-32)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation, strings
 * Submitted At: Tue, 09 Dec 2025 19:46:41 GMT
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sz = s.size();
    int A=0;
    int D=0;
    for (int i=0;i<sz;i++) {
        if (s[i]==&#39;A&#39;) A++;
        if (s[i]==&#39;D&#39;) D++;
    }
    if (A>D) {
        cout << "Anton\n";
    }else if (A==D) {
        cout << "Friendship\n";
    }else {
        cout << "Danik\n";
    }

    return 0;
}