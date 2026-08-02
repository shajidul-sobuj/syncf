/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2192B - Flipping_Binary_String
 * Link: https://codeforces.com/contest/2192/problem/B
 * Submission ID: 363899982
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1000 | Tags: constructive algorithms, strings
 * Submitted At: Sat, 21 Feb 2026 16:26:10 GMT
 * 
 * --- AI Analysis ---
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * Explanation: This code uses two vectors to store the indices of '1's and '0's in the binary string. It then checks the parity of the sizes of these vectors to determine the minimum number of flips required. If the sizes are even or odd, it prints the indices of '1's or '0's respectively. If the sizes are equal and odd, it prints -1 as it's impossible to flip the string to make all characters the same. The time complexity is O(n) due to the single pass through the string, and the space complexity is O(n) for storing the indices in the vectors.
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    vector<int> ones;
    vector<int> zeros;
    
    for (int i=0;i<n;i++) {
        if (s[i] == &#39;1&#39;) {
            ones.push_back(i+1);
        } else {
            zeros.push_back(i+1);
        }
    }
 
    if (ones.size()%2==0) {
        cout << ones.size() << "\n";
        for (int i=0;i<ones.size();i++) {
            cout << ones[i] << (i == ones.size()-1 ? "" : " ");
        }
        cout << "\n";
    } else if (zeros.size()%2 != 0) {
        cout << zeros.size() << "\n";
        for (int i=0;i<zeros.size();i++) {
            cout << zeros[i] << (i == zeros.size()-1 ? "" : " ");
        }
        cout << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}