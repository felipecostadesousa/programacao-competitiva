#include <bits/stdc++.h>

using namespace std;

int main(){

    int x,y;
    cin >> x >> y;

    int aux = x - y;

    if((aux == -2) or (aux == -1) or (aux == 1) or (aux == 2) or (aux == 3)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}