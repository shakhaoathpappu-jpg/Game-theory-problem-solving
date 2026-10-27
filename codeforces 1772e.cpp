#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long long t; cin >> t;
    while(t--){
        long long n; cin >> n;
        vector <long long> p(n);
        for(long long i = 0; i < n; i++){
        	cin >> p[i];
        }
        long long a = 0, b = 0, c = 0;
        for(long long i = 0; i < n; i++){
        	if(p[i] != i + 1 && p[i] != n - i){
        		c += 1;
        	}
        	else if(p[i] != i + 1){
        		a += 1;
        	}
        	else if(p[i] != n - i){
        		b += 1;
        	}
        }
        if(a + c <= b){
        	cout << "First\n";
        }
        else if(b + c < a){
        	cout << "Second\n";
        }
        else{
        	cout << "Tie\n";
        }
    }
}