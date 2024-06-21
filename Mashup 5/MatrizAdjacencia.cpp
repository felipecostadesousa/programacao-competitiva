#include <bits/stdc++.h>
using namespace std;
int main(){
  // Grafo Não Ponderado
  int grafo1[5][5] = {0};
  grafo1[1][2] = 1;
  grafo1[2][3] = 1;
  grafo1[2][4] = 1;
  grafo1[3][4] = 1;
  grafo1[4][1] = 1;

  // Percorrendo Grafo Não Ponderado
  for(int i = 1; i <= 4; i++){
    for(int j = 1; j <= 4; j++){
      cout << grafo1[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  // Grafo Ponderado
  int grafo2[5][5] = {0};
  grafo1[1][2] = 5;
  grafo1[2][3] = 7;
  grafo1[2][4] = 6;
  grafo1[3][4] = 5;
  grafo1[4][1] = 2;

  // Percorrendo Grafo Ponderado
  for(int i = 1; i <= 4; i++){
    for(int j = 1; j <= 4; j++){
      cout << grafo1[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}