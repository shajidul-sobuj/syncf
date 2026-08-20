// Code fetched by CPRepo (https://cprepo.vercel.app)
// Platform: codeforces | Problem: 2182A - New Year String

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            
            int opt1 = 0;
            for (int i = 0; i + 3 < n; i++) {
                if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5') {
                    opt1++;
                }
            }
            
            int opt2 = n; 
            for (int i = 0; i + 3 < n; i++) {
                int curr = 0;
                if (s[i] != '2') curr++;
                if (s[i+1] != '0') curr++;
                if (s[i+2] != '2') curr++;
                if (s[i+3] != '6') curr++;
                
                if (curr < opt2) opt2 = curr;
            }
            
            if (opt1 < opt2) cout << opt1 << "\n";
            else cout << opt2 << "\n";
        }
    }
    return 0;
}