/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 1831A - Twin_Permutations
 * Link: https://codeforces.com/contest/1831/problem/A
 * Submission ID: 362934406
 * Language: C++17 (GCC 7-32)
 * Execution Time: 156 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms
 * Submitted At: Sat, 14 Feb 2026 16:14:31 GMT
 */

#include <bits/stdc++.h>
using namespace std;

void pookie()
{
    int n;
    cin >> n;
    vector <int> a(n);
    int mx = INT_MIN;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        mx = max(mx,a[i]);
    }
    mx = mx+1;
    for (int i=0;i<n;i++)
    {
        cout << (int)(mx-a[i]) << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        pookie();
    }
    return 0;
}