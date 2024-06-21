#include<bits/stdc++.h>
const long long oo = 4e18;
using namespace std;
int n,e;
long long grafo[100][100],distancia[100][100];
void floydWarshall(){
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i==j){
        distancia[i][j] = 0;
      }
      else if (grafo[i][j] != 0){
        distancia[i][j] = grafo[i][j];
      }
      else{
        distancia[i][j] = oo;
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        if((distancia[j][i] != oo) && (distancia[i][k] != oo)){
          distancia[j][k] = min(distancia[j][k],distancia[j][i]+distancia[i][k]);
        }
      }
    }
  }
}
int main(){
  cin >> n >> e;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == j) {
        grafo[i][j] = 0;
      } 
      else {
        grafo[i][j] = oo;
      }
    }
  }
  for(int i = 0; i < e; i++){
    int u,v,w;
    cin >> u >> v >> w;
    grafo[u][v] = w;
    grafo[v][u] = w;
  }
  floydWarshall();
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      if (distancia[i][j] == oo) {
        cout << "i" << " ";
      } 
      else {
        cout << distancia[i][j] << " ";
      }
    }
    cout << endl;
  }
}