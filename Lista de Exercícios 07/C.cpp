#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int resultado = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] > i){
            resultado += v[i] - 1 - i;
        }
        else if(v[i] < i){
            resultado += i - v[i] + 1;
        }
        else if(v[i] == i){
            resultado += 1;
        }
    }

    cout << resultado << endl;

}