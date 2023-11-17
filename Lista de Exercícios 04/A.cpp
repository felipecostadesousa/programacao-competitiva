#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,q;
    cin >> n >> q;

    vector<int> v(n+1,0);

    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        v[i] = a;
    }

    vector<int> psum(n+1,0);

    for(int i = 1; i <= n; i++){
        psum[i] = v[i] + psum[i-1];
    }

    for(int i = 0; i < q; i++){
        int l,r;
        cin >> l >> r;
        cout << psum[r] - psum[l-1] << endl;
    }

}