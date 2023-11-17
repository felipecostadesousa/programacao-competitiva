#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,q;
    cin >> n >> q;

    vector<int> delta(n+2,0);

    for(int i = 0; i < q; i++){
        int l,r,x;
        cin >> l >> r >> x;
        delta[l] += x;
        delta[r+1] -= x;
    }

    int atual = 0;

    vector<int> v(n);

    for(int i = 1; i <= n; i++){
        atual += delta[i];
        v[i] = atual;
    }

    for(int i = 1; i <= n; i++){
        cout << v[i] << endl;
    }

}