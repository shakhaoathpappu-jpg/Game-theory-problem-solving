#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k; cin >> n >> k;
    vector<int> p(k);
    for(int i = 0; i < k; i++) cin >> p[i];
    
    string s(n, 'L');
    vector<int> win(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < k; j++) {
            if(p[j] <= i && !win[i - p[j]]) {
                win[i] = 1;
                break;
            }
        }
        if(win[i]) s[i - 1] = 'W';
        else s[i - 1] = 'L';
    }
    cout << s << endl;
}