#include <bits/stdc++.h>

using namespace std;

int buscaBinaria(vector<int>& vetor, int n, int query){
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

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin >> n >> m;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        int a;
        cin >> v[i];
    }

    sort(v.begin(), v.end()); 

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