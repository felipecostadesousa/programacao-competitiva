#include <bits/stdc++.h>

using namespace std;

int main(){

    long long x;
    cin >> x;

    long long contador = 1;

    while(true){
        if(pow(2,contador) > x){
            cout << 1 + x - pow(2,contador-1) << endl;
            break;
        }
        else{
            contador++;
        }
    }


}