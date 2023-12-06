#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    queue< pair<int,int> > fila;
    fila.push(make_pair(n,0));

    vector<bool> visited(10002,false);
    visited[n] = true;

    int clicks;
    
    while(!fila.empty()){
        n = fila.front().first;
        clicks = fila.front().second;
        fila.pop();
        
        if(n == m)
            break;
        
        if((n*2 <= 10000) and (!visited[n*2])){
            visited[n*2] = true;
            fila.push(make_pair(n*2,clicks+1));
        }
        
        if((n - 1 > 0) and (!visited[n-1])){
            visited[n-1] = true;
            fila.push(make_pair(n-1,clicks+1));
        }
    }
    
    cout << clicks << endl;

}