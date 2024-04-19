#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    string con = "bcd";
    string vog = "ae";
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string aux = s;
        for(int j = 0; j < n; j++){
            if(con.find(aux[j]) != std::string::npos){
                aux[j] = 'c';
            }
            else if(vog.find(aux[j])!= std::string::npos){
                aux[j] = 'v';
            }
        }
        vector<char> v;
        for(int j = 0; j < n; j++){
            
        }
    }
}