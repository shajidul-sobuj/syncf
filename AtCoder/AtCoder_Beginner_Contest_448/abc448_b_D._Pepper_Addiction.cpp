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
    int N, M;
    cin >> N >> M;

    vector<long long> C(M &#43; 1), sum(M &#43; 1, 0);

    for (int i = 1; i <= M; i&#43;&#43;) {
        cin >> C[i];
    }

    for (int i = 0; i < N; i&#43;&#43;) {
        int A;
        long long B;
        cin >> A >> B;
        sum[A] &#43;= B;
    }

    long long ans = 0;

    for (int j = 1; j <= M; j&#43;&#43;) {
        ans &#43;= min(C[j], sum[j]);
    }

    cout << ans << &#34;\n&#34;;
    

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        boom();
    }

    return 0;
}