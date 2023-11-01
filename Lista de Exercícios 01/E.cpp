#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,resultado=0,x=0;
    vector<int> v,aux;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i < n; i++){
        aux.push_back(i+1);
    }
    sort(v.begin(), v.end(),less<int>());
    for(int i = 0; i < aux.size(); i++){
        for(int j = x; j < v.size(); j++){
            if(aux[i]<=v[j]){
                resultado++;
                x++;
                break;
            }
            x++;
        }
    }
    cout << resultado;
}