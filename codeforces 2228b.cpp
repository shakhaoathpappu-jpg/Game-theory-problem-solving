#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n, x, y, k; cin >> n >> x >> y >> k;
        x--;
        y--;
        int d = abs(x - y);
        d = min(d, n - d);
        if(n <= 3) cout << 1 << endl;
        else cout << d + k << endl;
    }
}