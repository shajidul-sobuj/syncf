#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c=='0') cout << &#34;1&#34;;
        else cout << &#34;0&#34;;
    }
    return 0;
}