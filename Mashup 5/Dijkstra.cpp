#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int> pli;
typedef pair<int,ll> pil;
const ll oo = 4e18;
int n,e;
vector<vector<pil>> grafo;
vector<ll> distancia;
vector<bool> processados;
priority_queue<pli,vector<pli>,greater<pli>> filaPrioridade;
void dijkstra(int start){
  distancia.assign(n+1,oo);
  processados.assign(n+1,false);
  distancia[start] = 0;
  filaPrioridade.push({0,start});
  while (!filaPrioridade.empty()) {
    int atual = filaPrioridade.top().second; 
    filaPrioridade.pop();
    if (!processados[atual]){
      processados[atual] = true;
      for (auto &u : grafo[atual]) {
        int b = u.first;
        ll w = u.second;
        if (distancia[atual]+w < distancia[b]) {
          distancia[b] = distancia[atual]+w;
          filaPrioridade.push({distancia[b],b});
        }
      }
    }
  }
}
int main(){
  cin >> n >> e;
  grafo.resize(n + 1);
  distancia.resize(n + 1);
  for(int i = 0; i < e; i++){
    int u,v,w;
    cin >> u >> v >> w;
    grafo[u].push_back({v,w});
    grafo[v].push_back({u,w});
  }
  dijkstra(1);
  for(int i = 1; i <= n; i++){
    cout << distancia[i] << endl;
  }
}