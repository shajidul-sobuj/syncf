#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0]==s[s.size()-1])
    {
        cout << &#34;Yes\n&#34;;
    }else {
        cout << &#34;No\n&#34;;
    }
    return 0;
}