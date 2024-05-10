#include <bits/stdc++.h>
using namespace std;
class SegTree {
  struct Node {
    int max_sum;
    int max_elem;
  };
  vector<Node> st;
  vector<int> v;
  int n;
  int elem_neutro = INT_MIN;
  public:
    SegTree(int size, vector<int> source): st(4 * size), v(size) {
      n = size;
      for (int i = 0; i < size; i++) {
        v[i] = source[i];
      }
      build(0, n - 1, 1);
    }
    Node combine(Node a, Node b) {
      Node result;
      result.max_elem = max(a.max_elem, b.max_elem);
      result.max_sum = max({a.max_sum, b.max_sum, a.max_elem + b.max_elem});
      return result;
    }
    void build(int l, int r, int nodo) {
      if (l == r) {
        st[nodo].max_sum = elem_neutro;
        st[nodo].max_elem = v[l];
        return;
      }
      int mid = (l + r) / 2;
      build(l, mid, 2 * nodo);
      build(mid + 1, r, 2 * nodo + 1);
      st[nodo] = combine(st[2 * nodo], st[2 * nodo + 1]);
    }
    void update_range(int i, int value, int l, int r, int nodo) {
      if (l == r) {
        st[nodo].max_elem = value;
        return;
      }
      int mid = (l + r) / 2;
      if (i <= mid) {
        update_range(i, value, l, mid, 2 * nodo);
      }
      else {
        update_range(i, value, mid + 1, r, 2 * nodo + 1);
      }
      st[nodo] = combine(st[2 * nodo], st[2 * nodo + 1]);
    }
    void update(int i, int x) {
      int l = 0;
      int r = n - 1;
      int nodo = 1;
      update_range(i, x, l, r, nodo);
    }
    Node query_range(int ql, int qr, int l, int r, int nodo) {
      if (l > qr or r < ql) {
        return {elem_neutro, elem_neutro};
      }
      if (l >= ql and r <= qr) {
        return st[nodo];
      }
      int mid = (l + r) / 2;
      Node max_esq = query_range(ql, qr, l, mid, 2 * nodo);
      Node max_dir = query_range(ql, qr, mid + 1, r, 2 * nodo + 1);
      return combine(max_esq, max_dir);
    }
    int query(int ql, int qr) {
      Node result = query_range(ql, qr, 0, n - 1, 1);
      return result.max_sum;
    }
};
int main() {
  vector<int> arr;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr.push_back(a);
  }
  SegTree tree(n, arr);
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    string operation;
    int num1, num2;
    cin >> operation >> num1 >> num2;
    if (operation == "Q") {
      cout << tree.query(num1 - 1, num2 - 1) << endl;
    } 
    else if (operation == "U") {
      tree.update(num1 - 1, num2);
    }
  }
  return 0;
}