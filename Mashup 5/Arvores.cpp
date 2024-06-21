#include <bits/stdc++.h>
using namespace std;
const int MAX = 100005;
vector<int> grafo[MAX];
vector<int> contador(MAX,0);
int longest = 0;
void dfs(int start, int node, int depth) {
  bool folha = true;
  contador[start] = 1;
  for (auto u : grafo[start]) {
    if (u != node){
      //cout << u << " ";
      folha = false;
      dfs(u, start, depth + 1);
      contador[start] += contador[u];
    } 
  }
  if(folha){
    longest = max(longest, depth);
  }
}
void diametro(int start){
  longest = 0;
  dfs(start,0,0);
  int node1 = longest;
  cout << longest << endl;
  longest = 0;
  dfs(node1,0,0);
  int node2 = longest;
  cout << longest << endl;
}
int main(){
  int n,e;
  cin >> n >> e;
  for(int i = 0; i < e; i++){
    int u,v;
    cin >> u >> v;
    grafo[u].push_back(v);
    grafo[v].push_back(u);
  }
  // for (int i = 1; i < n; i++) {
  //   cout << i << " : ";
  //   for (int u : grafo[i]) {
  //     cout << "(" << u << ") ";
  //   }
  //   cout << endl;
  // }
  // cout << endl;
  //dfs(1,0,0);
  // for (int i = 1; i <= n; i++) {
  //   cout << i << " : " << contador[i]-1 << endl;
  // }
  // cout << longest << endl;
  diametro(1);
}