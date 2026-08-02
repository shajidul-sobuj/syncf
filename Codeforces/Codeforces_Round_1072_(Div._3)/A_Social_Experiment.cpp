/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2184A - Social_Experiment
 * Link: https://codeforces.com/contest/2184/problem/A
 * Submission ID: 357472440
 * Language: C++17 (GCC 7-32)
 * Execution Time: 78 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: math
 * Submitted At: Mon, 12 Jan 2026 14:46:42 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        if (x==2) {
            cout << 2 << endl;
            continue;
        }else if (x==3) {
            cout << 3 << endl;
            continue;
        }else if (x%2==0) {
            cout << 0 << endl;
            continue;
        }else {
            cout << 1 << endl;
        }
    }
    return 0;
}