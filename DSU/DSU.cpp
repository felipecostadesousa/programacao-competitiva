#include <bits/stdc++.h>

using namespace std;

class DSU {
  vector<int> parent;
  vector<int> card;
  public:
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
      if(card[a] < card[b]){
        swap(a,b);
      }
      card[a] += card[b];
      parent[b] = a;
    }
};

int main(){
  DSU conj(5);
  conj.join_sets(2,3);
  conj.join_sets(1,3);
  if(conj.same_set(1,2)){
    cout << "1 e 2 estao no mesmo conjunto." << endl;
  }
  else{
    cout << "1 e 2 NAO estao no mesmo conjunto." << endl;
  }
  conj.join_sets(5,4);
  if(conj.same_set(2,4)){
    cout << "2 e 4 estao no mesmo conjunto." << endl;
  }
  else{
    cout << "2 e 4 NAO estao no mesmo conjunto." << endl;
  }
  cout << conj.find_set(4) << endl;
  cout << conj.find_set(2) << endl;
  cout << conj.find_set(1) << endl;
  return 0;
}