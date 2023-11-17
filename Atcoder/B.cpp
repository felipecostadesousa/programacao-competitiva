#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    bool flag = false;

    for(int i = 0; i < n-1; i++){
        if(((s[i] == 'a') and (s[i+1] == 'b')) or ((s[i] == 'b') and (s[i+1]) == 'a')){
            flag = true;
            cout << "Yes" << endl;
            break;
        }
    }

    if(flag == false){
        cout << "No" << endl;
    }

}