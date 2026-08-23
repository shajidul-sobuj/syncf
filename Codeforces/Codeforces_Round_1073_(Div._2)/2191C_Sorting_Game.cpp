#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (is_sorted(s.begin(), s.end())) {
            cout << "Bob\n";
            continue;
        }

        int cnt0 = 0;
        for (char ch : s) if (ch == '0') cnt0++;

        vector<int> pos;
        for (int i = 0; i < cnt0; i++) {
            if (s[i] == '1') pos.push_back(i + 1);
        }
        for (int i = cnt0; i < n; i++) {
            if (s[i] == '0') pos.push_back(i + 1);
        }

        cout << "Alice\n";
        cout << pos.size() << endl;
        for (int v : pos) cout << v << " ";
        cout << endl;
    }
    return 0;
}