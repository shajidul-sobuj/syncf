#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void boom()
{
    string s;
    cin >> s;
    vector<pair <int, char>> up;
    vector <pair <int, char>> lo;
    // int idx_C = -1,idx_s = -1;
    for (int i=0;i<s.size();i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') && s[i] != 'b')
        {
            lo.push_back({i, s[i]});
        }
        if ((s[i] >= 'A' && s[i] <= 'Z') && s[i] != 'B')
        {
            up.push_back({i, s[i]});
        }

        // cout << idx_C << " " << idx_s << endl;
        if (s[i] == 'b')
        {
            if (!lo.empty())
            {
               lo.pop_back();
            }
        }
        else if (s[i] == 'B')
        {
             if (!up.empty())
            {
               up.pop_back();
            }
        }
        
    }
    vector<pair<int,char>> ans = up;
    ans.insert(ans.end(), lo.begin(), lo.end());
    sort(ans.begin(),ans.end());
    for (int i=0;i<ans.size();i++)
    {
        cout << ans[i].second;
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        boom();
    }

    return 0;
}