#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v;
    v.push_back(n);
    while(true){
        if(n == 1){
            break;
        }
        else if(n % 2 == 0){
            n /= 2;
            v.push_back(n);
        }
        else if(n % 2 != 0){
            n *= 3;
            n++;
            v.push_back(n);
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}