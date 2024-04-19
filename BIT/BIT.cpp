#include <bits/stdc++.h>

using namespace std;

struct FT {
    vector<int> bit;
    int n;
    FT(int n){
      this->n = n;
      bit.assign(n+1, 0);
    }
    int sum(int idx){
      int ret = 0;
      for(; idx >= 1; idx -= idx & -idx)
        ret += bit[idx];
      return ret;
    }
    int sum(int l, int r) {
      return sum(r) - sum(l-1);
    }
    void add(int idx, int delta) {
      for(; idx <= n; idx += idx & -idx)
        bit[idx] += delta;
    }
};

int main() {

}