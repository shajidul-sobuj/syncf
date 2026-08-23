#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    long long int n,l,r;
    cin >> n >> l >> r;
    vector <long long int> v(n&#43;1);
    for (int i=1;i<=n;i&#43;&#43;) cin >> v[i];
    int pos = -1;
    long long int mx = LLONG_MIN;
    for (int i=1;i<=n;i&#43;&#43;)
    {
        if (v[i]>=l && v[i]<=r && v[i]>mx)
        {
            mx = v[i];
            pos = i;
        }
    }
    cout << pos << endl;
    return 0;
}