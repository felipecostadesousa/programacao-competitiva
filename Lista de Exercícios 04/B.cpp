#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n,q;
    cin >> n >> q;

    vector<long long> delta(n+2,0);

    for(int i = 0; i < q; i++){
        long long l,r,x;
        cin >> l >> r >> x;
        delta[l] += x;
        delta[r+1] -= x;
    }
    
    long long atual = 0;

    vector<long long> v(n+1);

    for(int i = 1; i <= n; i++){
        atual += delta[i];
        v[i] = atual;
    }

    for(int i = 1; i <= n; i++){
        cout << v[i] << " ";
    }

}