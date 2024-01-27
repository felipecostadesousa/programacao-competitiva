#include <bits/stdc++.h>

using namespace std;

int buscaBinaria(int n, int m, vector<int>& vetor){

}

int main() {

    int n,m;
    cin >> n >> m;

    vector<int> vetor;

    for(int i = 0; i < n; i++){
        int v;
        cin >> v;
        vetor.push_back(v);
    }

    sort(vetor.begin(), vetor.end()); 

    int resultado = buscaBinaria(n,m,vetor);
    
    cout << resultado << endl;

}