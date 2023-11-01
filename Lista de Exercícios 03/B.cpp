#include <bits/stdc++.h>

using namespace std;

int main(){

    string t1;
    cin >> t1;

    string t2;
    cin >> t2;

    int n;
    cin >> n;

    map<char,char> m;

    for(int i = 0; i < t1.size(); i ++){
        m[t1[i]] = t2[i];
    }

    for(int i = 0; i < n; i++){

        string s;
        cin >> s;

        string resultado;

        for(int j = 0; j < s.length(); j++){
            if(isupper(s[j]) == 1){
                resultado += toupper(m[tolower(s[j])]);
            }
            else if(islower(s[j]) == 2){
                resultado += m[s[j]];
            }
            else if(m.count(s[j]) == 0){
                resultado += s[j];
            }
        }

        cout <<  resultado << endl;

    }

}