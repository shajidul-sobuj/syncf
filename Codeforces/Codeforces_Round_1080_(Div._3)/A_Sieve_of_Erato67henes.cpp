// Code fetched by CPRepo (https://cprepo.vercel.app)
// Platform: codeforces | Problem: 2195A - Sieve of Erato67henes

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++) cin >> a[i];
    bool yes = false;

    for (int i=0;i<n;i++)
    {
         if(a[i]==67)
        { 
            yes = true;
            break;
        }
    }
    if (yes)
        cout << "YES\n";
    else
        cout << "NO\n";
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