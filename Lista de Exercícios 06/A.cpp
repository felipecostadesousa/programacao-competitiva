#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,t;
    cin >> n >> t;

    vector< pair<int,int> > v1;

    for(int i = 0; i < n-1; i++){
        int a;
        cin >> a;
        v1.push_back(make_pair(i+1,a));
    }

    int aux = 1;
    bool flag = false;

    while(true){
        aux = v1[aux-1].first + v1[aux-1].second;
        if(aux > t){
            flag = true;
            break;
        }
        if(aux == t){
            break;
        }
    }

    if(flag){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

}