#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        for(int j = 1; j < 9; j++){
            stringstream ss;
            ss << j;
            string str = ss.str();
            string coluna = s[0] + str;
            if(coluna != s){
                cout << coluna << endl;
            }
        }
        for(int j = 0; j < 8; j++){
            const char* alfabeto = "abcdefgh";
            string letra = alfabeto;
            string aux = letra.substr(j,1);
            string linha = aux + s[1];
            if(linha != s){
                cout << linha << endl;
            }
        }
    }

}