#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m,c;
    cin >> n >> m >> c;

    vector<int> mensagem;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        mensagem.push_back(a);
    }

    vector<int> chave;

    for(int i = 0; i < m; i++){
        int b;
        cin >> b;
        chave.push_back(b);
    }

    for(int i = 0; i < (n-m+1); i++){
        for(int  j = 0; j < m; j++){
            mensagem[i+j] += chave[j];
        }
    }

    for(int i = 0; i < mensagem.size(); i++){
        mensagem[i] = mensagem[i] % c;
    }

    for(int i = 0; i < mensagem.size(); i++){
        cout << mensagem[i] << " ";
    }

}