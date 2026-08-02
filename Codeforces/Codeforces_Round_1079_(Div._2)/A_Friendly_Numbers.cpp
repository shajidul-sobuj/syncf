/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2197A - Friendly_Numbers
 * Link: https://codeforces.com/contest/2197/problem/A
 * Submission ID: 362431193
 * Language: C++17 (GCC 7-32)
 * Execution Time: 31 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: binary search, brute force, expression parsing, math, schedules
 * Submitted At: Wed, 11 Feb 2026 14:54:22 GMT
 */

#include <bits/stdc++.h>
using namespace std;

long long int ans(long long int n) {
    long long int sum = 0;
    while (n>0) {
        sum += (n%10);
        n = n/10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int x;
        cin >> x;

        int count = 0;
        for (long long int y=x+1;y<=x+81;y++) {
            if (y-ans(y) == x) {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
