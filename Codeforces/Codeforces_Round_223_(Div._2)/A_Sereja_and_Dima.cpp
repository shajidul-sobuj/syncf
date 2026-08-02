/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 381A - Sereja_and_Dima
 * Link: https://codeforces.com/contest/381/problem/A
 * Submission ID: 364167548
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: greedy, implementation, two pointers
 * Submitted At: Tue, 24 Feb 2026 08:27:39 GMT
 * 
 * --- AI Analysis ---
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * Explanation: This code uses a two-pointer approach (or more specifically, a two-pointer technique with a list) to solve the problem. It iterates through the list of numbers, alternating between Sereja and Dima to pick the maximum number, and updates the sum for each player accordingly.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    list <int> a;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int s = 0,d = 0;
    bool t_s = true;
    while(!a.empty())
    {
        if (t_s)
        {
            s += max(a.front(),a.back());
            if (a.front()>=a.back())
                a.pop_front();
            else
                a.pop_back();
        }
        else
        {
            d += max(a.front(),a.back());
            if (a.front()>=a.back())
                a.pop_front();
            else
                a.pop_back();
        }
        t_s = !t_s;
    }
    cout << s << " " << d;
    return 0;
}