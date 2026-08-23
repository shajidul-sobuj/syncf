#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    int s,t;
    cin >> s >> t;
    int count = 0;
    for (int i=0;i<=s;i&#43;&#43;)
    {
        for (int j=0;j<=s;j&#43;&#43;)
        {
            for (int k=0;k<=s;k&#43;&#43;)
            {
                if ( (i&#43;j&#43;k <= s) &&  (i*j*k <= t))
                    count&#43;&#43;;
            }
        }
    }
    cout << count << endl;
    return 0;
}