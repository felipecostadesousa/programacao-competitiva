#include <bits/stdc++.h>
using namespace std;
queue<int> fila;
vector<int> grafo[6];
bool visitados[6] = {false};
int distancia[6] = {-1};
void bfs(int node){
  fila.push(node);
  visitados[node] = true;
  distancia[node] = 0;
  while(!fila.empty()) {
    int atual = fila.front(); 
    fila.pop();
    cout << atual+1 << endl;
    for (auto u : grafo[atual]) {
      if (!visitados[u]){
        fila.push(u);
        visitados[u] = true;
        distancia[u] = distancia[atual]+1;
      }
    }
  }
  cout << endl;
  for(int i=0; i < 6; i++){
    cout << distancia[i] << endl;
  }
}
int main(){
  int n,e;
  cin >> n >> e;
  for(int i = 0; i < e; i++){
    int u,v;
    cin >> u >> v;
    u--;
    v--;
    grafo[u].push_back(v);
  }
  bfs(0);
}