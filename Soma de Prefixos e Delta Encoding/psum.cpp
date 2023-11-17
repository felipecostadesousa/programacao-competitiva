#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,q;
    cin >> n >> q;

    vector<int> v;
    v.push_back(0);

    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        v.push_back(aux);
    }

    vector<int> psum(n+1, 0);

    for(int i = 1; i <= n; i++){
        psum[i] = v[i] + psum[i-1];
    }

    for(int i = 0; i < q; i++){
        int l,r;
        cin >> l >> r;
        if(l == 0){
            cout << psum[r] << endl;
        }
        else{
            cout << psum[r]-psum[l-1] << endl;
        }
    }

}