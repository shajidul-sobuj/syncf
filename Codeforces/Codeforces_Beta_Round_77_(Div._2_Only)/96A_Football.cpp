#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool isDanger = false;
    if(s.size()<7) 
    {
        cout << "NO\n";
        return 0;
    }
    for (int i=0;i<s.size()-6;i++)
    {
        if ((s[i]==s[i+1]) && (s[i]==s[i+2]) && (s[i]==s[i+3]) && (s[i]==s[i+4]) && (s[i]==s[i+5]) && (s[i]==s[i+6]))
        {
            isDanger = true;
            break;
        }
    }
    (isDanger) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}