#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,g,f,c,resultado;
    cin >> n >> g >> f >> c;
    resultado = c + min(g, f);
    if(resultado <= n){
        cout << resultado;
    }else{
        cout << n;
    }
}