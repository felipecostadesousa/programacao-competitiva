#include <bits/stdc++.h>
using namespace std;
int main() {
    int result;
    bool flag = false;
    for(int i = 0; i < 5; i++){
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        v.push_back(e);
        for(int j = 0; j < v.size(); j++){
            if(v[j] == 1){
                result = abs(2-i) + abs(2-j);
                flag = true;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    cout << result << endl;
}