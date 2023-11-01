#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    int n,t,c;
    cin >> n >> t >> c;

    string prisioneiros;

    for(int i = 0; i < n; i++){

        int g;
        cin >> g;

        if(g <= t){
            std::stringstream ss;
            ss << g;
            std::string str = ss.str();
            prisioneiros += str;
        }
        else{
            prisioneiros += "-";
        }

    }

    int resultado = 0;

    for(int i = 0; i < (n-c+1); i++){

        bool flag = false;

        string aux = "";
        aux = prisioneiros.substr(i,c);

        for(int j = 0; j < aux.length(); j++){

            if(aux[j] == '-'){
                flag = true;
                break;
            }

        }

        if(flag == false){
            resultado++;
        }
    }

    cout << resultado << endl;

}