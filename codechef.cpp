#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; cin >> t;
  
    while(t--){
        int n ; cin >> n; 
        int a[n];

        int cnt =0;
        for(int i = 0; i < n; i++ ){
            cin >> a[i];
            if( a[i] >= 2)
            cnt += (a[i] - 1) ;
      
        }
        cout << cnt << endl;
    }
  
    return 0;
}