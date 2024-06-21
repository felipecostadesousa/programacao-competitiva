#include <bits/stdc++.h>
#define GRAPH_MAX_SIZE 100005
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,int> pli;
typedef pair<int,ll> pil;
const ll oo = 4e18;
int n,m;
vector<vector<pil>> grafo(GRAPH_MAX_SIZE);
vector<ll> distancias(GRAPH_MAX_SIZE,oo);
vector<int> predecessor(GRAPH_MAX_SIZE,-1);
priority_queue<pli,vector<pli>,greater<pli>> fila_prioridade;
void dijkstra(int start){
  for(int u = 1; u <= n; u++){
    distancias[u] = oo;
  }
  distancias[start] = 0;
  predecessor[start] = start;
  fila_prioridade.push({distancias[start],start});
  int u,v;
  ll mindist_su,w;
  while(!fila_prioridade.empty()){
    tie(mindist_su,u) = fila_prioridade.top();
    fila_prioridade.pop();
    if(mindist_su > distancias[u]){
      continue;
    }
    for(auto edge : grafo[u]){
      tie(v,w) = edge;
      if(distancias[v] > distancias[u] + w){
        distancias[v] = distancias[u] + w;
        predecessor[v] = u;
        fila_prioridade.push({distancias[v],v});
      }
    }
  }
}

int main(){
  cin >> n >> m;
  for(int i = 0; i < m; i++){
    int a,b,w;
    cin >> a >> b >> w;
    grafo[a].push_back({b,w});
    grafo[b].push_back({a,w});
  }
  dijkstra(1);
  if(distancias[n] == 4e18){
    cout << -1 << endl;
  }
  else{
    cout << 1 << " ";
    int aux = predecessor[n];
    stack<int> pilha;
    while(true){
      if(aux == 1){
        break;
      }
      else{
        pilha.push(aux);
        aux = predecessor[aux];
      }
    }
    while(!pilha.empty()){
      int elemento = pilha.top();
      cout << elemento << " ";
      pilha.pop();
    }
    cout << n << endl;
  }
}