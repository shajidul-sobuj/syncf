// Code fetched by CPRepo (https://cprepo.vercel.app)
// Platform: codeforces | Problem: 118A - String Task

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c!='a'&& c!='e' && c!= 'i' && c!='o' && c!='u' && c!='A'&& c!='E' && c!= 'I' && c!='O' && c!='U' && c!='y' && c!='Y')
        {
            cout << "." << (char)tolower(c);
        }
    }
    cout << endl;
    return 0;
}