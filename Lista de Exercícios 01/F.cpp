#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,resultado=0,soma,rem,numero;
    cin >> n >> a >> b;
    for(int i = 1; i < n+1; i++){
        numero=i;
        soma=0;
        while(numero != 0){
            rem = numero % 10;
            soma = soma + rem;
            numero = numero / 10;
        }
        if(soma>=a && soma<=b){
            resultado+=i;
        }
    }
    cout << resultado;
}