#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
            int n; cin >> n;

            if(n % 2==1)
            cout << -1 << endl;
            else
            {
                for(int i = 0; i < n/2; i++)
                {
                    cout << "1 -1" ;  
                }
                cout << endl;
            }     
    }

    return 0;
}