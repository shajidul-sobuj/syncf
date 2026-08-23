#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i&#43;&#43;)
    {
        cin >>a[i];
    }
    int tl = a[0];
    for (int i=0;i<n-1;i&#43;&#43;)
    {
        if (a[i]<a[i&#43;1])
        {
            tl = a[i&#43;1];
        }
        else{
            break;
        }
    }
    cout << tl << endl;
    return 0;
}