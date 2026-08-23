#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v(n&#43;1);
    for (int i=1;i<=n;i&#43;&#43;) cin >> v[i];
    for (int i=1;i<=n;i&#43;&#43;)
    {
        int idx = i;

        while (idx != v[idx]) {
            v[idx] = v[v[idx]];
            idx = v[idx];
        }

        cout << idx << &#34; &#34;;
    }
    return 0;
}