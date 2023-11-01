#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> vetorA;
    vector<int> vetorB;
    vector<int> vetorC;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        vetorA.push_back(a);
    }

    for(int i = 0; i < (n-1); i++){
        int b;
        cin >> b;
        vetorB.push_back(b);
    }

    for(int i = 0; i < (n-2); i++){
        int c;
        cin >> c;
        vetorC.push_back(c);
    }

    sort(vetorA.begin(), vetorA.end());
    sort(vetorB.begin(), vetorB.end());
    sort(vetorC.begin(), vetorC.end());

    bool flag = false;
    
    for(int i = 0; i < vetorB.size(); i++){
        if(vetorA[i] != vetorB[i]){
            cout << vetorA[i] << endl;
            flag = true;
            break;
        }
    }

    if(flag == false){
        cout << vetorA[vetorA.size()-1] << endl;
    }

    flag = false;

    for(int i = 0; i < vetorC.size(); i++){
        if(vetorB[i] != vetorC[i]){
            cout << vetorB[i] << endl;
            flag = true;
            break;
        }
    }

    if(flag == false){
        cout << vetorB[vetorB.size()-1] << endl;
    }

}