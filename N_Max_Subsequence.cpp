#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    string s; cin >> s;

    int max = 0;

    for(int i = 0; i<n; i++)
    {
        if(s[i] != s[i+1])
        max++;
    }

    cout << max << endl;
    
    return 0;
}