#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    int l, r, d, u;

    while(t--){

        cin >> l >> r >> d >> u;

        if(l==r && d == u && l == d )
        {
            cout << "Yes" << endl;
        }
            
        else 
        cout << "No" << endl;
    }

    return 0;
}