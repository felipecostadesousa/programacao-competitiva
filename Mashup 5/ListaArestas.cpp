#include <bits/stdc++.h>
using namespace std;
int main(){
  // Grafo Não Ponderado
  vector<pair<int,int>> arestas1;
  arestas1.push_back({1,2});
  arestas1.push_back({2,3});
  arestas1.push_back({2,4});
  arestas1.push_back({3,4});
  arestas1.push_back({4,1});

  // Percorrendo Grafo Não Ponderado
  for(int i = 0; i < arestas1.size(); i++){
    cout << arestas1[i].first << " " << arestas1[i].second << endl;
  }
  cout << endl;

  // Grafo Ponderado
  vector<tuple<int,int,int>> arestas2;
  arestas2.push_back({1,2,5});
  arestas2.push_back({2,3,7});
  arestas2.push_back({2,4,6});
  arestas2.push_back({3,4,5});
  arestas2.push_back({4,1,2});

  // Percorrendo Grafo Ponderado
  for(int i = 0; i < arestas2.size(); i++){
    cout << get<0>(arestas2[i]) << " " << get<1>(arestas2[i]) << " " << get<2>(arestas2[i]) << endl;
  }
  cout << endl;
}