#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){

        int n;
        cin >> n;

        vector<int> v;

        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            v.push_back(a);
        }

        for(int j = 0; j < n; j++){
            v[j] = (v[j]&v[n-1-j]);
        }

        int resultado = 0;

        for(int j = 0; j < v.size(); j++){
            if(v[j] > resultado){
                resultado = v[j];
            }
        }

        cout << resultado << endl;

    }

}