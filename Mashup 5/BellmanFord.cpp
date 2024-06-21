#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int> pli;
typedef pair<int,ll> pil;
const ll oo = 4e18;
int n,e;
vector<ll> distancia(100001,oo);
vector<int> predecessor(100001,-1);
vector<vector<pil>> grafo(100001);
bool bellmanFord(int node){
    int u,v;
    ll w;
    distancia[node] = 0;
    for(int i = 1; i < n; i++){
      for(int u = 1; u <= n; u++){
        for(pil elem : grafo[u]){
          tie(v,w) = elem;
          if ((distancia[u] != oo) and (distancia[u] + w < distancia[v])){
            predecessor[v] = u;
            distancia[v] = distancia[u] + w;
          }
        }
      }
    }
    for(u = 1; u <= n; u++){
      for(pil elem : grafo[u]){
        tie(v,w) = elem;
        if ((distancia[u] != oo) and (distancia[u] + w < distancia[v])){
          return true;
        }
      }
    }
    return false;
}
int main(){
  cin >> n >> e;
  for(int i = 0; i < e; i++){
    int u,v,w;
    cin >> u >> v >> w;
    grafo[u].push_back({v,w});
    grafo[v].push_back({u,w});
  }
  bool cicloNegativo = bellmanFord(1);
  if(cicloNegativo){
    cout << "CICLO NEGATIVO" << endl;
  }
  else{
    for(int i = 1; i <= n; i++){
      cout << distancia[i] << endl;
    }
  }
}