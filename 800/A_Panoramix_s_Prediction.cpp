#include <iostream>
using namespace std;

bool is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) return false;  
    }
    return true;  
}

int main() {
    int n, m;
    cin >> n >> m;

    int next_prime;
    for (int i = n + 1 ; i <= m ; i++) {  
        if(is_prime(i)){
            next_prime = i;
            break;
        }
    }

    cout << (next_prime == m ? "YES\n" : "NO\n");
}
