#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t buscaBinaria(vector<int> vetor, int n, int query){
    int l = 0;
    int r = n-1;
    int mid;
    while(l<=r){
        mid = (l+r)/2;
        if((vetor[mid] == query) and (vetor[mid-1] != query)){
            return mid;
        }
        if(vetor[mid] < query){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return -1;
}

void mergeSort(vector<int>& vetor, vector<int>& temp, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = (inicio + fim)/2;
        mergeSort(vetor,temp,inicio,meio);
        mergeSort(vetor,temp,meio+1,fim);
        merge(vetor,temp,inicio,meio+1,fim);
    }
}

void merge(vector<int>& vetor, vector<int>& temp, int inicio, int meio, int fim){
    int i,j,k;
    i = inicio;
    j = meio;
    k = inicio;
    while((i <= meio - 1) and (j <= fim)){
        if(vetor[i] <= vetor[j]){
            temp[k++] = vetor[i++];
        }
        else{
            temp[k++] = vetor[j++];
        }
    }
    while(i<= meio - 1){
        temp[k++] = vetor[i++];
    }
    while(j <= fim){
        temp[k++] = vetor[j++];
    }
    for(i = inicio; i <= fim; i++){
        vetor[i] = temp[i];
    }
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin >> n >> m;

    vector<int> v;
    vector<int> temp;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    mergeSort(v, temp, 0, n-1);

    for(int i = 0; i < m; i++){
        int q;
        cin >> q;
        int resultado = buscaBinaria(v,n,q);
        if (resultado != -1) {
        cout << resultado + 1 << " ";
        } 
        else {
            cout << -1 << " ";
        }
    }

}