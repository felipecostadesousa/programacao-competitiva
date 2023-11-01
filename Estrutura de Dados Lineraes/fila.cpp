#include <bits/stdc++.h>

using namespace std;

int main(){

    // Fila: Primeiro a entrar, primeiro a sair ou First In, First Out (FIFO)

    // Push: Adiciona um elemento no fim da fila
    // fila.push() 

    // Pop: Remove o elemento do início da fila 
    // fila.pop()

    // Front: Retorna o elemento do início da fila 
    // fila.front()

    // Back: Retorna o elemento do fim da fila 
    // fila.back()

    // Size: Retorna o tamanho da fila 
    // fila.size()

    // Empty: Retorna true se a fila estiver vazia ou retorna false se a fila não estiver vazia 
    // fila.empty()

    queue<int> fila;

    fila.push(9);
    fila.push(5);
    fila.push(6);
    fila.push(1);
    fila.push(8);

    cout << fila.size() << endl;

    while(!fila.empty()){

        int elemento = fila.front();
        cout << elemento << " ";
        fila.pop();

    }

}