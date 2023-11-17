#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n,q,t;
    cin >> n >> q >> t;

    vector<long long> delta(n+2,0);

    for(int i = 0; i < q; i++){
        long long l,r,x;
        cin >> l >> r >> x;
        delta[l] += x;
        delta[r+1] -= x;
    }

    int atual = 0;

    vector<long long> v(n);

    for(int i = 1; i <= n; i++){
        atual += delta[i];
        v[i-1] = atual;
    }

    long long k = 0;

    for(int i = 0; i < n; i++){
        if(v[i] >= t){
            k++;
        }
    }

    cout << k << endl;

}