// Code fetched by CPRepo (https://cprepo.vercel.app)
// Platform: codeforces | Problem: 2184A - Social Experiment

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        if (x==2) {
            cout << 2 << endl;
            continue;
        }else if (x==3) {
            cout << 3 << endl;
            continue;
        }else if (x%2==0) {
            cout << 0 << endl;
            continue;
        }else {
            cout << 1 << endl;
        }
    }
    return 0;
}