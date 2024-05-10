#include <bits/stdc++.h>
#define int long long
using namespace std;
class DSU {
  public:
    vector<int> parent;
    vector<int> card;
    DSU(int n): parent(n+1), card(n+1,1){
      for(int i = 1; i <= n; i++){
        parent[i] = i;
      }
    }
    int find_set(int x){
      if (x == parent[x]){
        return x;
      }
      return parent[x] = find_set(parent[x]);
    }
    bool same_set(int a, int b){
      return find_set(a) == find_set(b);
    }
    void join_sets(int a, int b){
      a = find_set(a);
      b = find_set(b);
      if(a == b){
        return;
      }
      if(card[a] < card[b]){
        swap(a,b);
      }
      card[a] += card[b];
      parent[b] = a;
    }
};
int32_t main() {
  int n,m;
  cin >> n >> m;
  vector<char> v;
  v.push_back('-');
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      char c;
      cin >> c;
      v.push_back(c);
    }
  }
  DSU conj(n*m);
  int aux = n*m;
  for(int i = 1; i < v.size(); i++){
    int jump = 0;
    if(v[i] == 'S'){
      jump = m;
    }
    else if(v[i] == 'N'){
      jump = -m;
    }
    else if(v[i] == 'E'){
      jump = 1;
    }
    else if(v[i] == 'W'){
      jump = -1;
    }
    if(!conj.same_set(i,i+jump)){
      conj.join_sets(i,i+jump);
      aux--;
    }
  }
  cout << aux << endl;
}