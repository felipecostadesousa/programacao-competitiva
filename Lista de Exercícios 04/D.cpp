#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    vector<int> vp;

    for(int i = 0; i < n; i++){
        int p;
        cin >> p;
        vp.push_back(p);
    }

    vector<int> delta(n+2,0);
    vector<int> delta2(n+2,0);

    for(int i = 0; i < m; i++){
        int l,r,a;
        cin >> l >> r >> a;
        delta[l] += a;
        delta[r+1] -= a;
        delta2[l] += 1;
        delta2[r+1] -= 1;
    }

    int atual = 0;
    int atual2 = 0;

    vector<int> v(n);
    vector<int> v2(n);

    for(int i = 1; i <= n; i++){
        atual += delta[i];
        v[i-1] = atual;
        atual2 += delta2[i];
        v2[i-1] = atual2;
    }

    for(int i = 0; i < n; i++){
        if(vp[i] - v[i] < 0){
            vp[i] = 0;
        }
        else{
            vp[i] -= v[i];
        }
    }

    int resultado = 0;

    for(int i = 0; i < n; i++){
        if(vp[i] > 0){
            resultado += v2[i];
        }
    }

    cout << resultado << endl;

}