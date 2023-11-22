#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        string resultado;
        if(n % 3 == 0){
            resultado = "Second";
        }
        else{
            int contador = 0;
            while(true){
                if(contador == 10){
                    break;
                }
                else{
                    if(n % 3 == 0){
                        resultado = "First";
                        break;
                    }
                    if((n + 1) % 3 == 0){
                        n += 1;
                    }
                    else if((n - 1) % 3 == 0){
                        n -= 1;
                    }
                }
                contador++;
            }
        }
        cout << resultado << endl;
    }
}