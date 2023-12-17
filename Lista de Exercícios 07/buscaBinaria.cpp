#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int buscaBinaria(const vector<int>& vetor, int alvo) {
    int inicio = 0;
    int fim = vetor.size() - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == alvo) {
            return meio;
        } else if (vetor[meio] > alvo) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    return -1;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vetor(array, array + sizeof(array) / sizeof(array[0]));

    int alvo = 7;

    int resultado = buscaBinaria(vetor, alvo);

    if (resultado != -1) {
        cout << "Elemento encontrado na posição: " << resultado << endl;
    } else {
        cout << "Elemento não encontrado no vetor." << endl;
    }

    return 0;
}
