#include<bits/stdc++.h>
using namespace std;

int f(int a, int b, int c, int d) 
{
    if(a == c) return d;
    if(b == d) return c;
    if(b == 0) {
        swap(a, b);
        swap(c, d);
    }
    if(a == 0 && b == 0) return max(c, d);
    return f(0, 0, max(c - b, 0), d - b) + b;
}

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n, a, b, c, d; cin >> n >> a >> b >> c >> d;
        if(a > c) {
            a = n - a;
            c = n - c;
        }
        if(b > d) {
            b = n - b;
            d = n - d;
        }
        if(a == c) {
            cout << d << endl;
            continue;
        }
        if(b == d) {
            cout << c << endl;
            continue;
        }
        int ans = 0;
        ans = max(ans, f(0, b, c - a, max(b, d - a)) + a);
        ans = max(ans, f(a, 0, max(a, c - b), d - b) + b);
        cout << ans << endl;
    }
}