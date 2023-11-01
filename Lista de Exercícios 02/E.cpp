#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int n;
    cin >> n;

    vector<int> tm(n);
    vector<int> pac(n);
    vector<int> tout(n);

    long long int curTm = 0;

    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;

    for(int i = 0; i < n; i++){

        long long int t,p,tt;
        cin >> t >> p >> tt;

        tm[i] = t;
        pac[i] = p;
        tout[i] = tt;

        q.push(make_pair(0,i));

    }

    while(!q.empty()){

        long long int clientTm = q.top().first;
        long long int idx = q.top().second;

        q.pop();

        if(clientTm + pac[idx] >= curTm){
            if(clientTm > curTm){
                curTm = clientTm;
            }
            curTm += tm[idx];
        }
        else{
            q.push(make_pair(clientTm+pac[idx]+tout[idx],idx));
        }

    }

    cout << curTm << endl;

}