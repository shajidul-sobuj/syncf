#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void boom()
{
    int a,b,c;
    cin >> a >> b >> c;
    if (a+b == c || b+c == a || c+a == b)
    {
        cout << "YES\n";
    }else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--)
    {
        boom();
    }
    

    return 0;
}