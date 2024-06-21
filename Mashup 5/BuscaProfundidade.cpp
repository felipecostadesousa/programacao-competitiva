#include <bits/stdc++.h>
using namespace std;
vector<int> grafo[5];
bool visitados[5] = {false};
void dfs(int node){
  cout << node+1 << endl;
  visitados[node] = true;
  for(int w: grafo[node]){
    if(visitados[w] == false){
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
  }
  dfs(0);
}