#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){

        int n,m;
        cin >> n >> m;

        string x;
        cin >> x;

        string s;
        cin >> s;

        bool flag = false;
        int resultado = 0;

        while(true){

            flag = x.find(s) != string::npos;

            if(flag == true){
                cout << resultado << endl;
                break;
            }

            if((x.length() > s.length()) and (resultado == 3)){
                cout << -1 << endl;
                break;
            }

            if(flag == false){
                x+=x;
                resultado++;
            }

        }
    }
}