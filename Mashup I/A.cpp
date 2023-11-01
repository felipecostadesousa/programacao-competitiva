#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<char> v;
    
    for(int i = 0; i < n; i++){
        v.push_back(s[i]);
    }

    int contador = 0;

    while(true){
        if(v.size() == 1){
            break;
        }
        if((contador == 0) and (v[contador] == v[contador+1])){
            v.erase(v.begin() + contador);
        }
        if((contador == 0) and (v[contador] != v[contador+1])){
            contador++;
        }
        else{
            if(contador == v.size() -1){
                break;
            }
            if((contador != v.size() - 1) and ((v[contador] == v[contador+1]) or (v[contador] == v[contador-1]))){
                v.erase(v.begin() + contador);
            }
            else{
                contador++;
            }
        }
    }

    cout << s.length() - v.size() << endl;

}