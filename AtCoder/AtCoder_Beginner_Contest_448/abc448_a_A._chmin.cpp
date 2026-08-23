#include <bits/stdc&#43;&#43;.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

#define forr(i,a,b) for(int i=a;i<b;i&#43;&#43;)
#define forb(i,a,b) for(int i=a;i>=b;i--)

const ll INF = 1e18;
const int MOD = 1e9 &#43; 7;

void yes() { cout << &#34;YES\n&#34;; }
void no()  { cout << &#34;NO\n&#34;;  }

void boom()
{
    int n,x;
    cin >> n >> x;

    vector<ll> a(n);
    forr(i,0,n)
        cin >> a[i];
    for (int i=0;i<n;i&#43;&#43;)
    {
        if (a[i]<x)
        {
            cout << 1 << endl;
            x = a[i];
        }else
        {
            cout << 0 << endl;
        }
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //  cin >> t;
    while (t--)
    {
        boom();
    }

    return 0;
}