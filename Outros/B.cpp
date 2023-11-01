#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,t;
    cin >> n >> t;

    vector< pair<int,int> > v;


    for(int i = 0; i < n; i++){
        int s,d;
        cin >> s >> d;
        if(s < t){
            while(s < t){
                s += d;
            }
            v.push_back(make_pair(s,i+1));
        }
        else if(s >= t){
            v.push_back(make_pair(s,i+1));
        }
    }

    sort(v.begin(), v.end());
    
    cout << v[0].second << endl;

}