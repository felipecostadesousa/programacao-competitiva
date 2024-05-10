#include <bits/stdc++.h>
#define GRAPH_MAX_SIZE 100
using namespace std;
vector<vector<int>> grafo(GRAPH_MAX_SIZE);
void bfs(int start){
  vector<bool> visitado(11,false);
  queue<int> fila;
  fila.push(start);
  visitado[start] = true;
  while(fila.size()){
    int u = fila.front();
    fila.pop();
    cout << u+1 << endl;
    for(int w: grafo[u]){
      if(visitado[w] == false){
        fila.push(w);
        visitado[w] = true;
      }
    }
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
    grafo[v].push_back(u);
  }
  bfs(0);
}