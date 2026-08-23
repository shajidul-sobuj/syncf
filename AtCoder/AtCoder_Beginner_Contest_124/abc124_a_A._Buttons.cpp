#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    long long int x,y;
    cin >> x >> y;

    if (x<y)
        swap(x,y);
    
    long long int ans = x;
    x--;
    ans&#43;=max(x,y);
    cout << ans << endl;

    return 0;
}