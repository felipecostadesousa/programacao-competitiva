#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int andGertrudes(vector<int>& v, int n) {

    int resultado_minimo = INT_MAX;

    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            int resultado = v[l];
            for (int k = l + 1; k <= r; k++) {
                resultado &= v[k];
            }
            if(resultado_minimo < resultado){
                resultado_minimo = resultado_minimo;
            }
            else if(resultado <= resultado_minimo){
                resultado_minimo = resultado;
            }
        }
    }

    return resultado_minimo;
}

int main() {

    int t;
    cin >> t;

    vector<int> resultados;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> va;

        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            va.push_back(a);
        }

        int resultado = andGertrudes(va, n);

        resultados.push_back(resultado);
    }

    for (int i = 0; i < resultados.size(); ++i) {
        cout << resultados[i] << endl;
    }

}