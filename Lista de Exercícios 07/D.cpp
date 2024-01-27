#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,k;
    cin >> n >> k;

    int aux = 0;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        aux += a;
    }

    for(int i = 0; i < n; i++){
        int b;
        cin >> b;
        aux += b;
    }

    cout << k/aux << endl;

}