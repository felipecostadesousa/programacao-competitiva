#include <bits/stdc++.h>

using namespace std;

void mergeSort(int v[], int temp[], int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = (inicio+fim)/2;
        mergeSort(v,temp,inicio,meio);
        mergeSort(v,temp,meio+1,fim);
        merge(v,temp,inicio,meio+1,fim);
    }
}

void merge(int v[], int temp[], int inicio, int meio, int fim){
    int i,j,k;
    i = inicio;
    j = meio;
    k = inicio;
    while((i <= meio -1) && (k <= fim)){
        if(v[i] <= v[j]){
            temp[k++] = v[i++];
        }
        else{
            temp[k++] = v[j++];
        }
    }
    while(i <= meio -1){
        temp[k++] = v[i++];
    }
    while(j <= fim){
        temp[k++] = v[j++];
    }
    for(i = inicio; i <= fim; i++){
        v[i] = temp[i];
    }
}

int main() {
    const int n = 7;
    int v[n] = {6,5,-1,7,2,12,-3};
    int temp[n];

    mergeSort(v,temp,0,n-1);

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    cout << endl;

}