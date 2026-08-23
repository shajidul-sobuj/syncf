#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    // vector<map<string,int>> mp;
    map<string,int> mp;
    for (int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        // auto it = find(mp.begin(),mp.end(),s);
        if (mp.count(s) == 0)
        {
            mp[s] = 0;
            cout << "OK\n";
        }else
        {
            mp[s]++;
            cout << s << mp[s] << endl;
        }
    }
    return 0;
}