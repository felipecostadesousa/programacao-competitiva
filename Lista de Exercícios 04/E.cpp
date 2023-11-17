#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n,q;
    cin >> n >> q;

    vector<long long> v;

    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        v.push_back(a);
    }

    vector<long long> delta(n+2,0);

    for(int i = 0; i < q; i++){
        long long l,r;
        cin >> l >> r;
        delta[l] += 1;
        delta[r+1] -= 1;
    }

    long long atual = 0;

    vector<long long> aux(n);
    
    for(int i = 1; i <=n; i++){
        atual += delta[i];
        aux[i-1] = atual;
    }

    sort(aux.begin(), aux.end(), greater<long long>());
    sort(v.begin(), v.end(), greater<long long>());

    long long resultado = 0;

    for(int i = 0; i < v.size(); i++){
        resultado += (v[i]*aux[i]);
    }

    cout << resultado << endl;

}