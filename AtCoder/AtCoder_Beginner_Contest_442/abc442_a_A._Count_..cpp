#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for (int i=0;i<s.size();i&#43;&#43;)
    {
        if(s[i]=='i'|| s[i]=='j') count&#43;&#43;;
    }
    cout << count << endl;
    return 0;
}