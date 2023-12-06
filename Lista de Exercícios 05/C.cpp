#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;

    for (long long i = 0; i < t; i++) {
        long long n;
        cin >> n;
        long long k = n;
        
        for (int bit = 60; bit >= 0; bit--) {
            if ((n & (1LL << bit)) != 0) {
                // Se o bit é 1, verificar se podemos modificar para 0
                long long candidate = k ^ (1LL << bit);
                if ((n & candidate) == 0) {
                    k = candidate;
                }
            }
        }
        
        cout << k << endl;
    }

    return 0;
}
