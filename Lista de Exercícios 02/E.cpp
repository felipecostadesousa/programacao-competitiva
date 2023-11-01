#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int,int> > vpp;

int main() {

    int n;
    cin >> n;

    priority_queue< pii, vpp, greater<pii> > filaPrioridade;
    vi vPaciencia;
    vi vFora;

    for(int i = 0; i < n; i++){
        int t,p,r;
        cin >> t >> p >> r;
        filaPrioridade.push(make_pair(t,i));
        vPaciencia.push_back(p);
        vFora.push_back(r);
    }

    while(!filaPrioridade.empty()){
        
    }

}