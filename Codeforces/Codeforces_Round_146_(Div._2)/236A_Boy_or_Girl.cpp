#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i=0;i<s.size()-1;i++)
    {
        bool isUnique = false;
        for (int j=i+1;j<s.size();j++)
        {
            if (s[i]==s[j]){
                s[j]=0;
            }
        }
    }
    int count = 0;
    for (int i=0;i<s.size();i++)
    {
        if((s[i]!=0) && (s[i]>='a' && s[i]<='z')) count++;
    }
    if (count%2!=0) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";
    return 0;
}