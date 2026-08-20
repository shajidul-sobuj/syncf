// Code fetched by CPRepo (https://cprepo.vercel.app)
// Platform: codeforces | Problem: 2194A - Lawn Mower

#include <iostream>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            long long n, w;
            cin >> n >> w;
            cout << n - (n / w) << "\n";
        }
    }
    return 0;
}