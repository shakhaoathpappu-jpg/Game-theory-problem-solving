#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin >> n;
    int sum[2] = {0, 0};
    vector<int> a;
    for(int i = 0; i < n; i++) {
        int t; cin >> t;
        vector<int> v(t);
        for(int j = 0; j < t; j++) cin >> v[j];
        int l = 0, r = t - 1;
        while(l < r) {
            sum[0] += v[l];
            sum[1] += v[r];
            l++;
            r--;
        }
        if(l == r) a.push_back(v[l]);
    }
    sort(a.begin(), a.end(), greater<int>());
    for(int i = 0; i < a.size(); i++) {
        sum[i % 2] += a[i];
    }
    cout << sum[0] << " " << sum[1] << endl;
}