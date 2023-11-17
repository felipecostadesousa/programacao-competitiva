#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    int n,t,c;
    cin >> n >> t >> c;

    string prisioneiros;
    int aux = 0;
    int resultado = 0;

    for(int i = 0; i < n; i++){
        int g;
        cin >> g;
        if(g<=t){
            prisioneiros+='1';
            aux++;
        }
        else{
            prisioneiros+='0';
            aux = 0;
        }
        if(aux >= c){
            resultado++;
        }
    }

    cout << resultado << endl;

}