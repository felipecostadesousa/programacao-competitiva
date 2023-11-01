#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    int resultado = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(),less<int>());
    int maximo = *max_element (v.begin(), v.end());
    for(int i = 0; i<v.size(); i++){
        resultado=resultado+(maximo-v[i]);
    }
    printf("%d", resultado);
}