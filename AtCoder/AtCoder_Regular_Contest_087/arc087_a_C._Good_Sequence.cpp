#include <bits/stdc&#43;&#43;.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    map<int, int> fr;
    while(n--)
    {
        int x;
        cin >> x;
        fr[x]&#43;&#43;;
    }
    ll count = 0;
    for (auto [x,y] : fr)
    {
        // cout << x << &#34; -> &#34; << y << endl;
        if (x > y)
        {
            count &#43;= y;
        }else{
            count &#43;= y-x;
        }
    }
    cout << count << endl;
    return 0;
}