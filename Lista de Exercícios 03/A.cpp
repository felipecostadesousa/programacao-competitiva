#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;
    cin >> q;

    set<int> s;

    for(int i = 0; i < q; i++){

        int t,m;
        cin >> t >> m;

        if(t == 1){
            s.insert(m);
        }
        else if(t == 2){
            if(s.count(m)){
                cout << "Sim" << endl;
            }
            else{
                cout << "Nao" << endl;
            }
        }

    }

}