#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,f,p;
    cin >> n >> f >> p;

    queue<int> fila;

    int tempo = 0;
    int aux = 0;

    for(int i = 0; i < n; i++){

        int a;
        cin >> a;
        fila.push(a);

    }

    while(!fila.empty()){

        if((aux % f == 0) or (aux == 0)){

            if(fila.front() <= p){
                tempo += 5;
                aux += 1;
                fila.pop();
            }

            else{
                tempo += 10;
                aux += 1;
                fila.push(fila.front() - 2);
                fila.pop();
            }

        }
        else{
            tempo += 1;
            aux += 1;
            fila.pop();
        }

    }

    cout << tempo;

}