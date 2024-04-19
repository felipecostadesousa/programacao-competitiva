#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#define int long long

using namespace std;

int getSum(int BITree[], int index) { 
  int sum = 0;
  index = index + 1; 
  while (index>0) { 
    sum += BITree[index]; 
    index -= index & (-index); 
  } 
  return sum; 
}
void updateBIT(int BITree[], int n, int index, int val) { 
  index = index + 1; 
  while (index <= n) { 
    BITree[index] += val; 
    index += index & (-index); 
  } 
}
int *constructBITree(int arr[], int n){ 
  int *BITree = new int[n+1]; 
  for (int i=1; i<=n; i++) 
    BITree[i] = 0; 
    for (int i=0; i<n; i++) 
      updateBIT(BITree, n, i, arr[i]); 
  return BITree; 
}

int32_t main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int *bitTree = constructBITree(arr,n);
  int q;
  cin >> q;
  for(int i = 0; i < q; i++){
    string operation;
    cin >> operation;
    if(operation == "q"){
      int l,r;
      cin >> l >> r;
      cout << getSum(bitTree, r-1) - getSum(bitTree, l-2) << endl;
    }
    else if(operation == "u"){
      int idx,x;
      cin >> idx >> x;
      updateBIT(bitTree, n, idx-1, x);
    }
  }
  return 0;
}