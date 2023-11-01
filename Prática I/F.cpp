#include <bits/stdc++.h>

using namespace std;

int main(){

    string n;
    cin >> n;

    bool flag = true;
    int contador = 0;

    for(int i = 0; i < n.size(); i++){

        if((n[i] != '1') and (i==0)){
            cout << "NO";
            flag = false;
            break;
        }

        if((n[i] != '1') and (n[i] != '4') and (i > 0)){
            cout << "NO";
            flag = false;
            break;
        }

        if(n[i] == '4'){
            contador++;
        }

        if(n[i] == '1'){
            contador = 0;
        }

        if(contador == 3){
            cout << "NO";
            flag = false;
            break;
        }

    }

    if(flag){
        cout << "YES";
    }

}