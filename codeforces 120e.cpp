#include<bits/stdc++.h>
using namespace std;

int main() 
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int T, n; scanf("%d", &T);
  while(T--) {
    scanf("%d", &n);
    printf("%d\n", n % 2 == 0);
  }
}