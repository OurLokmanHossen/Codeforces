#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin>>tt;
    while(tt--){

        string s ; cin >> s;
        int n = s.size();

        int ans = 0, index ;
        for(int i = n -1 ; i>=0 ; i--)
        
        {
            int num = s[i] - '0'; //convert string(char) to int
            if(num>0)
            {
                index = i; 
                break;
            }
            else
            {
                ans++;
            }
            
        }

        for(int i = 0; i<index; i++)
        {
           if( s[i] != '0') 
           {
            ans++;
           }
        }
        cout << ans << endl;
    }

    return 0;
}
