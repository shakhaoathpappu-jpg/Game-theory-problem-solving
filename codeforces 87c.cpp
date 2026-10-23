#include<bits/stdc++.h>
using namespace std;

const int N = 100005;

int main() 
{
    int n; cin >> n;
    vector<int> sg(n + 1, 0), xsg(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        set<int> vis;
        for(int j = 2; j * (j + 1) / 2 <= i; j++) {
            if((i - j * (j + 1) / 2) % j == 0) {
                int k = (i - j * (j + 1) / 2) / j;
                vis.insert(xsg[k + j] ^ xsg[k]);
            }
        }
        while(vis.find(sg[i]) != vis.end()) sg[i]++;

        xsg[i] = xsg[i - 1] ^ sg[i];
    }
    for(int j = 2; j * (j + 1) / 2 <= n; j++) {
        if((n - j * (j + 1) / 2) % j == 0) {
            int k = (n - j * (j + 1) / 2) / j;
            int g = xsg[k + j] ^ xsg[k];
            
            if(g == 0) {
                cout << j << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
}