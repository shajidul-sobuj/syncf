#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    long long int n,k;
    cin >> n >> k;
    long long int count = 0;
    while(n--)
    {
        long long int x,y;
        cin >> x >> y;
        if (x*y>=k) count&#43;&#43;;
    }
    cout << count << endl;
    return 0;
}