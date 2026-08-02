/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2194A - Lawn_Mower
 * Link: https://codeforces.com/contest/2194/problem/A
 * Submission ID: 361974500
 * Language: C++17 (GCC 7-32)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: greedy, math
 * Submitted At: Sun, 08 Feb 2026 10:05:35 GMT
 */

#include <iostream>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            long long n, w;
            cin >> n >> w;
            cout << n - (n / w) << "\n";
        }
    }
    return 0;
}