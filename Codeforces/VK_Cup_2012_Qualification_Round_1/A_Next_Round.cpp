/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 158A - Next_Round
 * Link: https://codeforces.com/contest/158/problem/A
 * Submission ID: 354427939
 * Language: C++17 (GCC 7-32)
 * Execution Time: 92 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: *special, implementation
 * Submitted At: Sun, 21 Dec 2025 11:31:23 GMT
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    int ck = a[k-1];
    int count=0;
    for (int i=0;i<n;i++) {
        if (a[i]>=ck && a[i]>0) count++;
    }
    cout << count << endl;
    return 0;
}