/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 1560A - Dislike_of_Threes
 * Link: https://codeforces.com/contest/1560/problem/A
 * Submission ID: 357097945
 * Language: C++17 (GCC 7-32)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: Fri, 09 Jan 2026 14:44:10 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int count = 0;
        int x = 1;
        while (1) {
            if (x % 3 != 0 && x % 10 != 3) {
                count++;
                if (count == k) {
                    cout << x << endl;
                    break;
                }
            }
            x++;
        }
    }

    return 0;
}
