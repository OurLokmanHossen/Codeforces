#include <iostream>
#include <bits/stdc++.h>
using namespace std;


 int main ()
 {
   int matrix [5] [5];

   //let, index 1 to 5 

   for (int i = 0; i < 5 ; i++)
   {
         for(int j = 0; j < 5; j++)
         {
            cin >> matrix [i][j];
            if(matrix[i][j]==1)
            {
              cout<< abs(2-i)+ abs(2-j);
            }
         }
         
   }
  
    return 0;
 }