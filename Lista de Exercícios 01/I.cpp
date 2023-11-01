#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    vector<string> linhas;
    vector<string> colunas;

    for(int i = 0; i < n; i++){
        string entrada;
        cin >> entrada;
        linhas.push_back(entrada);
    }

    for(int i = 0; i < m; i++){
        colunas.push_back("");
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            colunas[i] += linhas[j].substr(i,1);
        }
    }

    vector<int> indicesLinhas;
    vector<int> indicesColunas;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(linhas[i].substr(j,1) == "1"){
                indicesLinhas.push_back(i+1);
            }
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(colunas[i].substr(j,1) == "1"){
                indicesColunas.push_back(i+1);
            }
        }
    }

    if((indicesColunas.size() == 0) and (indicesLinhas.size() == 0)){
        cout << "0x0" << endl;
    }

    else{

        int c1,c2,l1,l2;
        c1 = *min_element(indicesColunas.begin(), indicesColunas.end());
        c2 = *max_element(indicesColunas.begin(), indicesColunas.end());
        l1 = *min_element(indicesLinhas.begin(), indicesLinhas.end());
        l2 = *max_element(indicesLinhas.begin(), indicesLinhas.end());

        int linha,coluna;
        linha = (l2-l1+1);
        coluna = (c2-c1+1);

        cout << coluna << "x" << linha << endl;

    }

}