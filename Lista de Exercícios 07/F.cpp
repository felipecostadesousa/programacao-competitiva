#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int bsort(vector<int>& vetor, int n){
    int resultado = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if (vetor[i] > vetor[j]) {
                swap(vetor[i], vetor[j]);
                resultado++;
            }
        }
    }
    return resultado;
}

int main() {

    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int resultado = bsort(v,n);
    
    if(resultado % 2 == 0 ){
        cout << "Carlos" << endl;
    }
    else if(resultado % 2 != 0){
        cout << "Marcelo" << endl;
    }

}