#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,xC,yC,xI,yI,pI,v,l;
    vector<int> precos;
    cin >> n >> xC >> yC;
    for(int i = 0; i < n; i++){
        cin >> xI >> yI >> pI;
        precos.push_back(pI+((abs(xC-xI)+abs(yC-yI))*2));
    }
    v = *min_element (precos.begin(), precos.end());
    for(int i = 0; i < precos.size(); i++){
        if(precos[i] == v){
            l=i;
            break;
        }
    }
    cout << v << " " << l+1;
}