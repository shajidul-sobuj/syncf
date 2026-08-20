// Code fetched by CPRepo (https://cprepo.vercel.app)
// Platform: codeforces | Problem: 791A - Bear and Big Brother

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a,b;
    cin >> a >> b;
    int count = 0;
    while(1)
    {
        if (a>b)
        {
            break;
        }
        count++;
        a = a*3;
        b = b*2;
        
    }
    cout << count << endl;
    return 0;
}