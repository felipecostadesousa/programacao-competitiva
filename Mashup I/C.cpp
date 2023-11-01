#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector< pair<int,int> > v;
    vector< pair<int,int> > aux;

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        v.push_back(make_pair(t,i));
        aux.push_back(make_pair(-1,i));
    }

    sort(v.begin(),v.end());

    for(int i = 0; i < v.size(); i++){
        if(i == 0){
            aux[v[i].second].first = 1;
        }
        else{
            if(v[i].first == v[i-1].first){
                aux[v[i].second].first = aux[v[i-1].second].first;
            }
            else{
                aux[v[i].second].first = i+1;
            }
        }
    }

    for(int i = 0; i < aux.size(); i++){
        cout << aux[i].first << " ";
    }

}