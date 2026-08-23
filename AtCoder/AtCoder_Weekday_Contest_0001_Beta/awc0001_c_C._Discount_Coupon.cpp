#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector <int> v(n);
    for (int i=0;i<n;i&#43;&#43;) cin >> v[i];
    sort(v.begin(),v.end());
    while(k--)
    {
        v.pop_back();
    }
    long long int dis = 0;
    for (int x : v)
    {
        dis&#43;=x;
    }
    cout << dis << endl;
    return 0;
}