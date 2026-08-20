// Code fetched by CPRepo (https://cprepo.vercel.app)
// Platform: codeforces | Problem: 58A - Chat room

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.size()<5) 
    {
        cout << "NO\n";
        return 0;
    }
    vector <char> vs;
    for (char c : s)
    {
        vs.push_back(c);
    }
    string t = "hello";
    
    for (int i=0;i<5;i++)
    {
        bool has = false;
        for (int j=0;j<vs.size();j++)
        {
            if (t[i]==vs[j])
            {
                vs.erase(vs.begin(),vs.begin()+j+1);
                has = true;
                break;
            }
            
        }
        if(!has)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}