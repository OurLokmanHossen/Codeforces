#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int a[105];

        
        for(int i = 0; i< n; i++)
        {
            cin >> a[i];
        }
       
        int sub = 1, totalSub = 1;
        for(int i = 1; i< n; i++)
        {
            if(a[i] >= a[i-1])
            {
              sub++;
              
            }
            else {
                sub = 1;
            }
            totalSub += sub;
        }
          cout << totalSub << endl;
    }

    return 0;
}