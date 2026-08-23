#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;
    int a[n];
    for (int i=0;i<n;i&#43;&#43;)
    {
        cin >> a[i];
    }
    for (int i=0;i<n-1;i&#43;&#43;)
    {
        if (a[i&#43;1]-a[i]<=x)
        {
            cout << a[i&#43;1] << endl;
            return 0;
        }
    }
    cout << &#34;-1\n&#34;;

    return 0;
}