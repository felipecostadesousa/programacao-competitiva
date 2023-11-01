#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    int resultado = 0, meias = n;

    while(true){
        if(meias == 0){
            break;
        }
        else{
            meias--;
            resultado++;
            if(resultado % m == 0){
                meias++;
            }
        }
    }

    cout << resultado << endl;

}