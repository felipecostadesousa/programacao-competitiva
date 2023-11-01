#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    priority_queue < int, vector<int>, greater<int> > filaPrioridade;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        filaPrioridade.push(num);
    }

    bool flag = false;

    int minimo = filaPrioridade.top();

    while(!filaPrioridade.empty()){
        int elemento = filaPrioridade.top();
        filaPrioridade.pop();
        if(elemento > minimo){
            cout << elemento << endl;
            flag = false;
            break;
        }
        if(elemento == minimo){
            flag = true;
        }
    }

    if(flag == true){
        cout << "NO" << endl;
    }

}