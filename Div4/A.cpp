#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string letras;
        cin >> letras;
        if((letras == "abc") or (letras == "acb") or (letras == "abc") or (letras == "bac") or (letras == "cba")){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

}