#include <bits/stdc++.h>
#define GRAPH_MAX_SIZE 100
using namespace std;
vector<vector<int>> grafo(GRAPH_MAX_SIZE);
vector<bool> visitado(GRAPH_MAX_SIZE,false);
void dfs(int start){
  cout << start+1 << endl;
  visitado[start] = true;
  for(int w: grafo[start]){
    if(visitado[w] == false){
      dfs(w);
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
  dfs(0);
}
