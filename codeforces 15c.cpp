#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll calc(ll x) 
{
    if(x < 1) return 0;
    if(x % 4 == 0) return x;
    if(x % 4 == 1) return 1;
    if(x % 4 == 2) return x + 1;
    return 0;
}

int main() 
{
    int n; cin >> n;
    ll cur = 0;
    for(int i = 0; i < n; i++) {
        ll x, m;
        cin >> x >> m;

        cur ^= calc(x - 1);
        cur ^= calc(x + m - 1);
    }
    if(cur) cout << "tolik" << endl;
    else cout << "bolik" << endl;
}