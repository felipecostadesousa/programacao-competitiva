#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    stack< pair<int,int> > pilha;

    for(int i = 0; i < n; i++){

        string c;
        int x;
        cin >> c >> x;

        int maior;

        if(i == 0){

            if(c == "A"){
                pilha.push(make_pair(x,x));
                maior = x;
            }
            
            else if(c == "V"){
                cout << "0" << endl;
            }
        }

        else if(i > 0){

            if(c == "A"){
                if(pilha.empty()){
                    pilha.push(make_pair(x,x));
                    maior = x;
                }
                else{
                    maior = max(x,pilha.top().second);
                    pilha.push(make_pair(x,maior));
                }
            }

            if(c == "V"){
                if(!pilha.empty()){
                    cout << pilha.top().second << endl;
                }
                else{
                    cout << "0" << endl;
                }
            }

            if(c == "R"){
                pilha.pop();
            }

        }

    }

}