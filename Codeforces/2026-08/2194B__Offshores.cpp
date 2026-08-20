// Code fetched by CPRepo (https://cprepo.vercel.app)
// Platform: codeforces | Problem: 2194B - Offshores

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            long long x, y;
            cin >> n >> x >> y;
            vector<long long> a(n);
            long long s = 0;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                s += (a[i] / x) * y;
            }
            long long m = 0;
            for (long long v : a) {
                m = max(m, v + s - (v / x) * y);
            }
            cout << m << "\n";
        }
    }
    return 0;
}