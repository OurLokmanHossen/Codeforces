#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    
    while(t--)
    {
        string n ; cin >> n;

        int sum = 0;
        for(int i = 0; i<n.size(); i++)
        {
            sum += n[i] -'0';
        }
        cout << sum << endl;
    }
    
    return 0;
}