#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){

        long long int x,y;
        cin >> x >> y;

        long long int aux = (x - y);

        if(aux != 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

}