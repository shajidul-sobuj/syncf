// Code fetched by CPRepo (https://cprepo.vercel.app)
// Platform: codeforces | Problem: 25A - IQ test

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int oc = 0;
    int ec = 0;
    for (int i=1;i<=n;i++)
    {
        if (a[i]%2==0) ec++;
        if (a[i]%2!=0) oc++;
    }
    int idx;
    if (ec>oc) 
    {
        for (int i=1;i<=n;i++)
        {
            if (a[i]%2!=0) 
            {
                cout << i << endl;
                return 0;
            }
        }
    }else 
    {
        for (int i=1;i<=n;i++)
        {
            if (a[i]%2==0) 
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    return 0;
}