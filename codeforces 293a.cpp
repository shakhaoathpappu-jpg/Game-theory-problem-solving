#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string a, b; cin >> a >> b;
    int x = 0, y = 0, z = 0, w = 0;
    for(int i = 0; i < 2 * n; i++) {
        if(a[i] == '0' && b[i] == '0') x++;
        if(a[i] == '1' && b[i] == '0') y++;
        if(a[i] == '0' && b[i] == '1') z++;
        if(a[i] == '1' && b[i] == '1') w++;
    }
    int p = 0, q = 0;
    for(int i = 1; i <= n; i++) {
        if(w != 0) {
            w--;
            p++;
        }
        else if(y != 0) {
            y--;
            p++;
        }
        else if(z != 0) z--;
        else x--;
        
        if(w != 0) {
            w--;
            q++;
        }
        else if(y != 0) y--;
        else if(z != 0) {
            z--;
            q++;
        }
        else x--;
    }
    if(p > q) cout << "First" << endl;
    else if(p < q) cout << "Second" << endl;
    else cout << "Draw" << endl;
}