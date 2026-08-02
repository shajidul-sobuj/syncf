/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2158A - Suspension
 * Link: https://codeforces.com/contest/2158/problem/A
 * Submission ID: 351227962
 * Language: C++17 (GCC 7-32)
 * Execution Time: 61 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms, greedy, math
 * Submitted At: Sat, 29 Nov 2025 15:53:40 GMT
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i=1;i<=t;i++) {
        int n,y,r;
        cin >> n >> y >> r;
        int count = 0;
        count = count + y/2;
        count = count + r/1;
        if (count >=n) {
            cout << n << endl;
        }else if (count < n) {
            cout << count << endl;
        }
    }

    return 0;
}