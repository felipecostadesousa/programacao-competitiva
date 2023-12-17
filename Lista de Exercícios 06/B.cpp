#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    char cor = 'B';

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char celula;
            cin >> celula;

            if (celula == '.') {
                cout << cor;
            } 
            else {
                cout << "-";
            }

            if (cor == 'W') {
                cor = 'B';
            }
            else {
                cor = 'W';
            }
        }

        cout << endl;

        if (m % 2 == 0) {
            if (cor == 'W') {
                cor = 'B';
            }
            else {
                cor = 'W';
            }
        }
    }
}
