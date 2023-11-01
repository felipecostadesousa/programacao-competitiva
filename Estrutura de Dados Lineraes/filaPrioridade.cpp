#include <bits/stdc++.h>

using namespace std;

int main(){

    // Fila de Prioridade: Primeiro a entrar, primeiro a sair ou First In, First Out (FIFO). Ela mantém o elemento do topo como sempre sendo o maior ou o menor elemento sempre.

    // Push: Adiciona um elemento na fila de prioridade
    // filaPrioridade.push() 

    // Pop: Remove o elemento do topo da fila de prioridade 
    // filaPrioridade.pop()

    // Top: Retorna o elemeneto do topo da fila de prioridade
    // filaPrioridade.top()

    // Size: Retorna o tamanho da fila de prioridade 
    // filaPrioridade.size()

    // Empty: Retorna true se a fila de prioridade estiver vazia ou retorna false se a fila de prioridade não estiver vazia 
    // filaPrioridade.empty()

    priority_queue<int> filaPrioridade;
    priority_queue < int, vector<int>, greater<int> > filaPrioridadeInversa;

    filaPrioridade.push(9);
    filaPrioridade.push(5);
    filaPrioridade.push(6);
    filaPrioridade.push(1);
    filaPrioridade.push(8);

    cout << filaPrioridade.size() << endl;

    while(!filaPrioridade.empty()){

        int elemento = filaPrioridade.top();
        cout << elemento << " ";
        filaPrioridade.pop();

    }

    cout << "\n";

    filaPrioridadeInversa.push(9);
    filaPrioridadeInversa.push(5);
    filaPrioridadeInversa.push(6);
    filaPrioridadeInversa.push(1);
    filaPrioridadeInversa.push(8);

    cout << filaPrioridadeInversa.size() << endl;

    while(!filaPrioridadeInversa.empty()){

        int elemento = filaPrioridadeInversa.top();
        cout << elemento << " ";
        filaPrioridadeInversa.pop();

    }

}