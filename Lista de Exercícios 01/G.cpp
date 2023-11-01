#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    vector<char> v;
    set<char> s;
    cin >> x;
    x++;
    while(true){
        ostringstream str1;
        str1 << x;
        string geek = str1.str();
        for(int i = 0; i < geek.size(); i++){
            v.push_back(geek[i]);
            s.insert(geek[i]);
        }
        if(v.size() == s.size()){
            printf("%d", x);
            break;
        }
        else{
            x++;
            v.clear();
            s.clear();
        }
    }
}