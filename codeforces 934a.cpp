#include<bits/stdc++.h>
using namespace std;

long long A[1005];
long long B[1005];

int main()
{
    int n,m; cin >> n >> m;
    for(int i=1; i<=n; i++) cin >> A[i];
    for(int i=1; i<=m; i++) cin >> B[i];
    long long ma=1000000000000000001;
    for(int i=1; i<=n; i++){
        long long mi=-1000000000000000001;
        for(int j=1; j<=n; j++){
            if(j==i) continue;
            for(int k=1; k<=m; k++){
                mi=max(mi,A[j]*B[k]);
            }
        }
        ma=min(ma,mi);
    }
    cout << ma << endl;
}
