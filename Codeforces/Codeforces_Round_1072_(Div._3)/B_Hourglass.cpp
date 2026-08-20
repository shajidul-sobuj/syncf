// Code fetched by CPRepo (https://cprepo.vercel.app)
// Platform: codeforces | Problem: 2184B - Hourglass

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long s, k, m;
    if (!(cin >> s >> k >> m)) return;

    long long flips = m/k;
    long long elapsed_in_interval = m%k;

    long long sand_start;
    if (flips % 2 == 0) {
        sand_start = s;
    } else {
        sand_start = min(s, k);
    }

    if (elapsed_in_interval == 0) {
        cout << sand_start << endl;
    } else {
        long long ans = max(0LL, sand_start - elapsed_in_interval);
        cout << ans << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}