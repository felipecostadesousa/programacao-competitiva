#include <bits/stdc++.h>
#include <iostream>
#include <cctype>

using namespace std;

int main() {

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string s;
        cin >> s;

        stack< pair<char,int> > pilhaMinusculas;
        stack< pair<char,int> > pilhaMaiusculas;

        int contador = 0;

        for(int i = 0; i < s.length(); i++){
            if((char(s[i]) != 'B') and (char(s[i]) != 'b')){
                if(isupper(char(s[i]))){
                    pilhaMaiusculas.push(make_pair(char(s[i]),contador));
                    contador++;
                }
                else if(islower(char(s[i]))){
                    pilhaMinusculas.push(make_pair(char(s[i]),contador));
                    contador++;
                }
            }
            else{
                if((char(s[i]) == 'B') and (!pilhaMaiusculas.empty())){
                    pilhaMaiusculas.pop();
                }
                else if((char(s[i]) == 'b') and (!pilhaMinusculas.empty())){
                    pilhaMinusculas.pop();
                }
            }
        }

        vector< pair<int,char> > v;

        while(!pilhaMaiusculas.empty()){
            char letra = (pilhaMaiusculas.top()).first;
            int numero = (pilhaMaiusculas.top()).second;
            pilhaMaiusculas.pop();
            v.push_back(make_pair(numero,letra));
        }

        while(!pilhaMinusculas.empty()){
            char letra = (pilhaMinusculas.top()).first;
            int numero = (pilhaMinusculas.top()).second;
            pilhaMinusculas.pop();
            v.push_back(make_pair(numero,letra));
        }

        sort(v.begin(),v.end());

        for(int i = 0; i < v.size(); i++){
            cout << v[i].second;
        }

        cout << endl;

    }

}