#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> c(n + 1, 0);
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            c[x]++;
        }
        bool f = true;
        for(int i = 0; i <= n; i++) {
            if(c[i] <= 2 * k - 2) break;
            else if(c[i] == 2 * k - 1) f = false;
        }
        if(!f) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}