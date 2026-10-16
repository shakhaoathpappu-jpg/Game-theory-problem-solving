#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        int xr = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            xr ^= a[i];
        }
        int ans = (xr == 0);
        for(int i = 0; i < n; i++) {
            if(xr && (xr ^ a[i]) <= a[i]) {
                if((xr ^ a[i]) || n > 1) ans++;
            }
        }
        cout << ans << endl;
    }
}