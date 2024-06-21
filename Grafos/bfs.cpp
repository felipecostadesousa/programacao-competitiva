#include <bits/stdc++.h>
#define GRAPH_MAX_SIZE 100
using namespace std;
vector<vector<int>> grafo(GRAPH_MAX_SIZE);
vector<int> distancia(GRAPH_MAX_SIZE,-1);
vector<int> pai(GRAPH_MAX_SIZE,-1);
void bfs(int start){
  vector<bool> visitado(GRAPH_MAX_SIZE,false);
  queue<int> fila;
  fila.push(start);
  visitado[start] = true;
  distancia[start] = 0;
  while(fila.size()){
    int u = fila.front();
    fila.pop();
    cout << u+1 << endl;
    for(int w: grafo[u]){
      if(visitado[w] == false){
        fila.push(w);
        visitado[w] = true;
        distancia[w] = distancia[u] + 1;
        pai[w] = u;
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
  }
  bfs(0);
}
