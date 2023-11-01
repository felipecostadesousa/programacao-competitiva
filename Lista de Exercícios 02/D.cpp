#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    priority_queue < pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> > > filaPrioridade;
    queue<int> fila;
    vector<int> v;

    int resposta = 0;

    for(int i = 0; i < n; i++){
        int vi;
        cin >> vi;
        v.push_back(vi);
        filaPrioridade.push(make_pair(0,i));
    }

    for(int i = 0; i < m; i++){
        int ci;
        cin >> ci;
        fila.push(ci);
    }

    while(!fila.empty()){
        
        int items = fila.front();
        fila.pop();

        pair<int,int> caixa = filaPrioridade.top();
        filaPrioridade.pop();

        caixa.first += items*v[caixa.second];
        resposta = max(caixa.first, resposta);
        filaPrioridade.push(caixa);

    }

    cout << resposta << endl;

}