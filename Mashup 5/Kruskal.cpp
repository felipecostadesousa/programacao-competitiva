#include<bits/stdc++.h>
using namespace std;
typedef tuple<int,int,int> tii;
typedef pair<int,int> pii;
typedef long long ll;
int n,e,u,v,w;
vector<pii> grafo[200001];
class DSU{
  int n;
  vector<int> parente;
  vector<int> cardinalidade;
public:
  DSU(int numero){
    n = numero;
    parente.push_back(0);
    cardinalidade.push_back(0);
    for(int i = 1; i <= n; i++){
      parente.push_back(i);
      cardinalidade.push_back(1);
    }
  }
  int find_set(int x){
    if(x == parente[x]){
      return x;
    }
    parente[x] = find_set(parente[x]);
    return parente[x];
  }
  bool same_set(int a, int b){
    return find_set(a) == find_set(b);
  }
  void union_sets(int a, int b){
    int rep_a = find_set(a);
    int rep_b = find_set(b);
    if(rep_a != rep_b){
      if(cardinalidade[rep_a] > cardinalidade[rep_b]){
        parente[rep_b] = rep_a;
        cardinalidade[rep_a] += cardinalidade[rep_b];
      }
      else{
        parente[rep_a] = rep_b;
        cardinalidade[rep_b] += cardinalidade[rep_a];
      }
    }            
  }
};
int main(){
  cin >> n >> e;
  DSU vertices(n);
  priority_queue<tii,vector<tii>,greater<tii>> fila;
  for(int i = 0; i < e; i++){
    cin >> u >> v >> w;
    grafo[u].push_back({v,w});
    grafo[v].push_back({u,w});
    fila.push({w,u,v});
  }
  int j = 1;
  ll custo = 0;
  vector<tii> mst;
  while(!fila.empty()){
    tie(w,u,v) = fila.top();
    fila.pop();
    if(!vertices.same_set(u,v)){
      mst.push_back({u,v,w});
      custo+=w;
      vertices.union_sets(u,v);
    }
    j++;
  }
  cout << custo << endl;
}