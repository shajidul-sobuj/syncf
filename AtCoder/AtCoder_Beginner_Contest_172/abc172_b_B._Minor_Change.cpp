#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int count = 0;
    for (int i=0;i<s.size();i&#43;&#43;)
    {
        if (s[i]!=t[i]) count&#43;&#43;;
    }
    cout << count << endl;
    return 0;
}