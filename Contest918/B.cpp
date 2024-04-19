#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string aux = "ABC";
        string analise;
        for(int j = 0; j < 3; j++){
            string line;
            cin >> line;
            if(line.find('?') != std::string::npos){
                analise = line;
            }
        }
        for(int j = 0; j < 3; j++){
            if(analise[j] == 'A'){
                aux[0] = '?';
            }
            if(analise[j] == 'B'){
                aux[1] = '?';
            }
            if(analise[j] == 'C'){
                aux[2] = '?';
            }
        }
        for(int j = 0; j < 3; j++){
            if(aux[j] != '?'){
                cout << aux[j] << endl;
                break;
            }
        }
    }
}