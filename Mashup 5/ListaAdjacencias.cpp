#include <bits/stdc++.h>
using namespace std;
int main(){
  // Grafo Não Ponderado
  vector<int> grafo1[5];
  grafo1[1].push_back(2);
  grafo1[2].push_back(3);
  grafo1[2].push_back(4);
  grafo1[3].push_back(4);
  grafo1[4].push_back(1);

  // Percorrendo Grafo Não Ponderado
  for (int i = 1; i <= 4; i++) {
    cout << i << " : ";
    for (int u : grafo1[i]) {
      cout << "(" << u << ") ";
    }
    cout << endl;
  }
  cout << endl;

  // Grafo Ponderado
  vector<pair<int,int>> grafo2[5];
  grafo2[1].push_back({2,5});
  grafo2[2].push_back({3,7});
  grafo2[2].push_back({4,6});
  grafo2[3].push_back({4,5});
  grafo2[4].push_back({1,2});

  // Percorrendo Grafo Ponderado
  for (int i = 1; i <= 4; i++) {
    cout << i << " : ";
    for (auto &edge : grafo2[i]) {
      cout << "(" << edge.first << "," << edge.second << ") ";
    }
    cout << endl;
  }
  cout << endl;
}