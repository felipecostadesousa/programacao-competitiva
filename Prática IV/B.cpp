#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    vector<string> v;
    vector<string> vAux;

    int contador = 0;

    for(int i = 0; i < s.length()-1; i++){
        string elemento = s.substr(i,2);
        v.push_back(elemento);
        if(elemento == "VK"){
            contador++;
        }
    }

    for(int i = 0; i < s.length(); i++){
        int aux = 0;
        vAux.clear();
        string stringAux = s;
        if(stringAux[i] == 'K'){
            stringAux[i] = 'V';
        }
        else if(stringAux[i] == 'V'){
            stringAux[i] = 'K';
        }
        for(int j = 0; j < stringAux.length()-1; j++){
            string elemento = stringAux.substr(j,2);
            vAux.push_back(elemento);
            if(elemento == "VK"){
                aux++;
            }
        }
        if(aux > contador){
            contador = aux;
        }
    }

    if(s == "VV"){
        contador = 1;
    }

    cout << contador << endl;

}