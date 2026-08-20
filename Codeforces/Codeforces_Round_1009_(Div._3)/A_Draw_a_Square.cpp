// Code fetched by CPRepo (https://cprepo.vercel.app)
// Platform: codeforces | Problem: 2074A - Draw a Square

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a==b && b == c && c == d) cout << "Yes\n";
    else cout << "No\n";
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