#include <bits/stdc++.h>

using namespace std;

int main(){

    // Insere um elemento no Set
    // insert(element)

    // Remove uma key ou um iterator
    // erase()

    // Retorna um iterator da posição do elemento
    // find(element)

    // Retorna a quantidade de elementos de uma chave específica
    // count

    // Retorna o tamanho do set
    // size

    // Limpa todo o conteúdo do set
    // clear

    // Retorna um iterator para o início do set
    // begin

    // Retorna um iterator para o final do set
    // end

    // Retorna um iterator para o primeiro valor >= element
    // lower_bound(element)

    // Retorna um iterator para o primeiro valor > element
    // upper_bound(element)

    set<int> s;

    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(7);

    cout << s.size() << endl;

    if(s.count(7)){
        cout << "Temos o 7" << endl;
    }

    if(s.find(2) == s.end()){
        cout << "O numero 2 nao esta no set" << endl;
    }
    else{
        cout << "O numero 2 esta no set" << endl;
    }

    if(s.find(3) == s.end()){
        cout << "O numero 3 nao esta no set" << endl;
    }
    else{
        cout << "O numero 3 esta no set" << endl;
    }

    s.erase(3);

    if(s.find(3) == s.end()){
        cout << "O numero 3 nao esta no set" << endl;
    }
    else{
        cout << "O numero 3 esta no set" << endl;
    }

    s.clear();
    
    if(s.count(7)){
        cout << "Temos o 7" << endl;
    }
    else{
        cout << "Nao temos o 7" << endl;
    }

}