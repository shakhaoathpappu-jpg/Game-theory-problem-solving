#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> w;
        for(int i = 0; i < n;) {
            int j = i;
            while(j < n && a[j] == a[i]) j++;
            if(a[i] % 2 == 1) w.push_back(j - i);
            i = j;
        }
        sort(w.begin(), w.end(), greater<ll>());
        ll diff = 0;
        for(int i = 0; i < w.size(); i++) {
            if(i % 2 == 0) diff += w[i];
            else diff -= w[i];
        }
        ll alice = (sum + diff) / 2;
        ll bob = sum - alice;
        cout << alice << " " << bob << endl;
    }
}