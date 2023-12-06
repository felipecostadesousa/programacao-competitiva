#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n;
    cin >> n;

    long long resultado = 1;

    while(resultado <= n){
        resultado *=2;
    }

    cout << n << " " << ((resultado-1)^n) << endl;

}