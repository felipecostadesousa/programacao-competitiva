#include<bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>

using namespace std;

#define int long long

int32_t main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){

        int n;
        cin >> n;

        set<int> s;

        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            if(a % 2 == 0){
                s.insert(a);
            }
        }

        vector<int> v1(s.begin(), s.end());

        map<int,int> m;

        for(int j = 0; j < v1.size(); j++){
            int aux = v1[j];
            int contador = 0;
            while(true){
                if(aux % 2 != 0){
                    break;
                }
                else{
                    aux /= 2;
                    contador++;
                }
            }
            if(m.count(aux)){
                m[aux] = max(contador,m[aux]);
            }
            else{
                m[aux] = contador;
            }
        }

        int resultado = 0;

        for (const auto& entry : m) {
            resultado += entry.second;
        }

        cout << resultado << endl;

    }

}