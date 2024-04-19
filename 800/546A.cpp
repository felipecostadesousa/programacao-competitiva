#include <bits/stdc++.h>
using namespace std;
int main() {
    int k,n,w;
    cin >> k >> n >> w;
    int aux = 0;
    for(int i = 1; i < w+1; i++){
        aux += i;
    }
    if(aux * k > n){
        cout << (aux * k) - n << endl;
    }
    else{
        cout << 0 << endl;
    }
}