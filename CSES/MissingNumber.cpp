#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<bool> v(n,0);
    for(int i = 0; i < (n-1); i++){
        int a;
        cin >> a;
        v[a-1] = true;
    }
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == false){
            cout << i+1 << endl;
            break;
        }
    }
}