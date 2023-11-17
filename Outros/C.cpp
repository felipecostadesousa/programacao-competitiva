#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);

    int n,q,l;
    cin >> n >> q >> l;

    vector<int> v(n+1,0);
    vector<int> delta(n+2,0);

    for(int i = 0; i < q; i++){
        int li,ri,mi;
        cin >> li >> ri >> mi;
        if(mi > l){
            delta[li]++;
            delta[ri+1]--;
        }
    }

    int soma = 0;

    for(int i = 0; i < v.size(); i++){
        soma+=delta[i];
        v[i]=soma;
    }

    int maximo = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] > maximo){
            maximo = v[i];
        }
    }

    vector<int> vmaximo;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == maximo){
            vmaximo.push_back(i);
        }
    }

    if(maximo == 0){
        cout << -1;
    }
    else{
        int ans = 1,aux = 1;
        for(int i = 0; i < vmaximo.size()-1; i++){
            if(vmaximo[i]+1 == vmaximo[i+1]){
                aux++;
            }
            else{
                ans = max(ans,aux);
                aux = 1;
            }
        }
        ans = max(ans,aux);
        cout << ans;
    }

}