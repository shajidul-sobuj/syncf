/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 617A - Elephant
 * Link: https://codeforces.com/contest/617/problem/A
 * Submission ID: 354577504
 * Language: C++17 (GCC 7-32)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: math
 * Submitted At: Mon, 22 Dec 2025 14:57:02 GMT
 */

#include <bits/stdc++.h>using namespace std;int main() {    int x;    cin >> x;    int count = 0;    for (int i=5;i>0;i--) {        int y = x/i;        count+=y;        x = x%i;    }    cout << count << endl;    return 0;}