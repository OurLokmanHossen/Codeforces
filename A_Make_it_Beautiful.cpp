#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
        int a[n]; 
        for(int i = 0; i<n;i++)
        {
            cin >> a[i];
        }

        sort(a, a+n, greater<int>());

        if(a[0] == a[n-1])
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;

        cout << a[0] << " " << a[n-1] << " ";

        for(int i = 1; i<n-1; i++) 
        {
            cout << a[i] << " " ;
            cout << endl;  
        }
    }
    return 0;
}