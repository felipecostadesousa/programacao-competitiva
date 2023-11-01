#include <bits/stdc++.h>

using namespace std;

int main(){

    string c;
    cin >> c;

    bool flag = false;
    int resultado = 0;
    int aux = 0;

    for(int i = 0; i < c.size(); i++){

        if(c[i] == 'r'){
            flag = true;
            resultado = resultado + aux;
            aux = 0;
        }

        if(c[i] == 's'){
            aux = 0;
            flag = false;
        }

        if((c[i] == '.') and (flag == true)){
            aux++;
        }

    }

    if(flag == true){
        resultado = resultado + aux;
    }

    cout << resultado;

}