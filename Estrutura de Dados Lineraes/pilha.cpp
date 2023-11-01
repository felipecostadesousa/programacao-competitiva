#include <bits/stdc++.h>

using namespace std;

int main(){

    // Pilha: Último a entrar, primeiro a sair ou Last in, First Out (LIFO)

    // Push: Insere um elemento no topo da pilha
    // pilha.push() 

    // Pop: Remove um elemento do topo da pilha 
    // pilha.pop()

    // Top: Retorna o elemento do topo da pilha 
    // pilha.top()

    // Size: Retorna o tamanho da pilha 
    // pilha.size()

    // Empty: Retorna true se a pilha estiver vazia ou retorna false se a pilha não estiver vazia 
    // pilha.empty()

    stack<int> pilha;

    pilha.push(2);
    pilha.push(7);
    pilha.push(8);
    pilha.push(4);

    cout << pilha.size() << endl;

    while(!pilha.empty()){

        int elemento = pilha.top();
        cout << elemento << " ";
        pilha.pop();

    }

}