#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n, m , a; cin >> n >> m >> a;
   // x = flagstone 
    long long x = (((n+a-1)/a) *( (m+a-1)/a));
    cout << x << endl;

    return 0;
}