#include <bits/stdc++.h>
using namespace std;
vector<int> grafo[5];
bool visitados[5] = {false};
int conectado = 1;
void conectados(int node){
  visitados[node] = true;
  for(int w: grafo[node]){
    if(visitados[w] == false){
      conectados(w);
      conectado++;
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
    grafo[u].push_back(v);
  }
  conectados(0);
  if(conectado == u){
    cout << "GRAFO CONECTADO" << endl;
  }
  else{
    cout << "GRAFO NAO CONECTADO" << endl;
  }
}