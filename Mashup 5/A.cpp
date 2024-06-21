#include <bits/stdc++.h>
using namespace std;
#define int long long
queue<int> fila;
vector<int> grafo[2000000];
bool visitados[2000000] = {false};
int distancia[2000000] = {-1};
int n;
int num = 0;
int aux = 0;
int bfs(int node){
  fill(begin(visitados), begin(visitados) + n + 1, false);
  fill(begin(distancia), begin(distancia) + n + 1, -1);
  fila.push(node);
  visitados[node] = true;
  distancia[node] = 0;
  while(!fila.empty()) {
    int atual = fila.front(); 
    fila.pop();
    for (auto u : grafo[atual]) {
      if (!visitados[u]){
        fila.push(u);
        visitados[u] = true;
        distancia[u] = distancia[atual]+1;
      }
    }
    if(distancia[atual] > aux){
      aux = distancia[atual];
      num = atual;
    }
  }
  return num;
}
int32_t main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> n;
  for(int i = 0; i < (n-1); i++){
    int a,b;
    cin >> a >> b;
    grafo[a].push_back(b);
    grafo[b].push_back(a);
  }
  int start = bfs(1);
  int end = bfs(start);
  cout << start << endl;
  cout << end << endl;
}