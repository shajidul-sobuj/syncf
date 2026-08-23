#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector <int> fr(26,0);
    for (int i=0;i<s.size();i&#43;&#43;)
    {
        int idx = (int)s[i]-'a';
        fr[idx]&#43;&#43;;
    }
    for (int i=0;i<26;i&#43;&#43;)
    {
        int x = fr[i];
        if (x == 0)
        {
            cout << (char)(i&#43;'a') << endl;
            return 0;
        }
    }
    cout << &#34;None\n&#34;;
    return 0;
}