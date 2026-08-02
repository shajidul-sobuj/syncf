/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 791A - Bear_and_Big_Brother
 * Link: https://codeforces.com/contest/791/problem/A
 * Submission ID: 362805816
 * Language: C++17 (GCC 7-32)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: Fri, 13 Feb 2026 17:32:26 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a,b;
    cin >> a >> b;
    int count = 0;
    while(1)
    {
        if (a>b)
        {
            break;
        }
        count++;
        a = a*3;
        b = b*2;
        
    }
    cout << count << endl;
    return 0;
}