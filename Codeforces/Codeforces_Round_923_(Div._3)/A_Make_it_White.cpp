/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 1927A - Make_it_White
 * Link: https://codeforces.com/contest/1927/problem/A
 * Submission ID: 364196874
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, strings
 * Submitted At: Tue, 24 Feb 2026 13:33:36 GMT
 * 
 * --- AI Analysis ---
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * Explanation: This code uses two separate passes through the string to find the first and last occurrences of 'B', and then calculates the difference between these indices to find the length of the substring that needs to be made white. The two passes are done in a single loop, resulting in a linear time complexity.
 */

#include <bits/stdc++.h>
using namespace std;

void pookie()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int idx1,idx2;
    for (int i=0;i<n;i++)
    {
        if (s[i]==&#39;B&#39;)
        {
            idx1 = i;
            break;
        }
    }
    for (int i=n-1;i>=0;i--)
    {
        if (s[i]==&#39;B&#39;)
        {
            idx2 = i;
            break;
        }
    }
    //cout << idx1 << " " << idx2 << endl;
    cout << idx2-idx1+1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        pookie();
    }
    return 0;
}