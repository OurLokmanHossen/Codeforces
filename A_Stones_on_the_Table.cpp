#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

   int n , neighbours =0;
   cin >> n;
    
    string s;
    cin >> s;


   for (int i =0; i< n-1; i++)
   {
    
    if (s[i]==s[i+1])
    {
       
        neighbours += 1;
      
    }

   }

   cout << neighbours << endl;
 
    return 0;
}