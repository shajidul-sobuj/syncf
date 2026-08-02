/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2008A - Sakurako_s_Exam
 * Link: https://codeforces.com/contest/2008/problem/A
 * Submission ID: 363543072
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: brute force, constructive algorithms, greedy, math
 * Submitted At: Wed, 18 Feb 2026 17:42:51 GMT
 * 
 * --- AI Analysis ---
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 * Explanation: This code uses a simple conditional logic to determine whether it's possible to make the sum of two numbers even or not. It checks for specific conditions where one of the numbers is 0 and the other is odd, or when both numbers are even. If none of these conditions are met, it calculates the parity of the number obtained by subtracting twice the remainder of the other number from the first number, and outputs "YES" if the result is even, and "NO" otherwise.
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin >> a >> b;

    if ((a == 0 && b%2 != 0) || (b == 0 && a%2 != 0)) {
        cout << "NO\n";
        return;
    }

    if (a == 0 && b%2 == 0)
    {
        cout << "YES\n";
        return;
    }
    if (b == 0 && a%2 == 0)
    {
        cout << "YES\n";
        return;
    }

    long long int x = a-((b%2)*2);
    if ( x%2 == 0)
    {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
    
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}