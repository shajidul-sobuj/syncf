#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    long long x = c&#43;(b*10)&#43;(a*100);
    if (x%4==0) cout << &#34;YES\n&#34;;
    else cout << &#34;NO\n&#34;;
    // cout << x << endl;
    return 0;
}