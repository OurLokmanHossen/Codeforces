#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

        int t; cin >> t;

        while(t--)
        {
            int n ; cin >> n;

            int a[n]; 

            map<int,int > freq;

            for(int i = 0 ; i< n; i++)
            {
                cin >> a[i];
                freq[a[i]]++;
            } 
           
            int score = 0;
            for(int i = 0; i<= n; i++)
            {
                score += freq[i] / 2 ;

            }

            cout << score << endl;
        }
    return 0;
}