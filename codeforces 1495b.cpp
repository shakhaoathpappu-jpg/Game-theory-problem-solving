#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin >> n;
    vector<int> a(n + 2, 0), f(n + 2, 0), e(n + 2, 0);
    for(int i = 1; i <= n; i++) cin >> a[i];
    int mx = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i] > a[i - 1]) f[i] = f[i - 1] + 1;
        else f[i] = 1;
        mx = max(mx, f[i]);
    }
    for(int i = n; i >= 1; i--) {
        if(a[i] > a[i + 1]) e[i] = e[i + 1] + 1;
        else e[i] = 1;

        mx = max(mx, e[i]);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(f[i] == mx) cnt++;
        if(e[i] == mx) cnt++;
    }
    for(int i = 1; i <= n; i++) {
        if(f[i] == mx && e[i] == mx && cnt == 2 && mx % 2 == 1) {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}