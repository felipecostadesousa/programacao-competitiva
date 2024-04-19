#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int result = 0;
    for(int i = 0; i < v.size(); i++){
        if((v[i] >= v[k-1]) && (v[i] > 0)){
            result++;
        }
        else{
            break;
        }
    }
    cout << result << endl;
}