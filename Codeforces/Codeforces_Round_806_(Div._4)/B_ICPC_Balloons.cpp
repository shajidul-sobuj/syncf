/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 1703B - ICPC_Balloons
 * Link: https://codeforces.com/contest/1703/problem/B
 * Submission ID: 353014985
 * Language: C++17 (GCC 7-32)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: data structures, implementation
 * Submitted At: Thu, 11 Dec 2025 14:26:34 GMT
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count =0;
        for (int i=&#39;A&#39;;i<=&#39;Z&#39;;i++) {
            int x=count;
            for (int j=0;j<n;j++) {
                if (s[j]==i){
                    count++;
                }
            }
            if (count >x) {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}