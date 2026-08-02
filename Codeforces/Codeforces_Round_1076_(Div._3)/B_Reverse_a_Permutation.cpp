/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2193B - Reverse_a_Permutation
 * Link: https://codeforces.com/contest/2193/problem/B
 * Submission ID: 362040251
 * Language: C++17 (GCC 7-32)
 * Execution Time: 250 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy
 * Submitted At: Sun, 08 Feb 2026 17:34:37 GMT
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> sufMax(n);
    sufMax[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        sufMax[i] = max(a[i], sufMax[i + 1]);
    }
    for (int i = 0; i < n; i++) {
        if (sufMax[i] > a[i]) {
            int mx = sufMax[i];
            int pos = i;
            for (int j = n - 1; j >= i; j--) {
                if (a[j] == mx) {
                    pos = j;
                    break;
                }
            }
            reverse(a.begin() + i, a.begin() + pos + 1);
            break;
        }
    }

    for (int x : a) cout << x << " ";
    cout << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
