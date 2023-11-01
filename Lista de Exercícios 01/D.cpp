#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,index;
    string nome;
    vector<string> v;
    vector<string> ordem;
    vector< pair <string,int> > aux;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> nome;
        v.push_back(nome);
        ordem.push_back(nome);
    }
    sort(v.begin(), v.end(),less<string>());
    for(int i = 0; i < n; i++){
        aux.push_back(make_pair(v[i],i));
    }
    for(int i = 0; i < ordem.size(); i++){
        for(int j = 0; j < aux.size(); j++){
            if(aux[j].first == ordem[i]){
                index = j;
                break;
            }
        }
        cout <<  aux[index].second << ' ';
    }
}