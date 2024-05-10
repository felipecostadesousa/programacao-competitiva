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
  DSU conj(n);
  int aux = 1;
  for(int i = 0; i < m; i++){
    int a,b;
    cin >> a >> b;
    if(!conj.same_set(a,b)){
      conj.join_sets(a,b);
      aux = max(aux,conj.card[conj.find_set(a)]);
      n--;
    }
    cout << n << " " << aux << endl;
  }
}