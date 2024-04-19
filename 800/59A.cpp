#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int upper = 0;
    int lower = 0;
    for(int i = 0; i < s.size(); i++) {
        if(isupper(s[i])){
            upper++;
        }
        else if(islower(s[i])){
            lower++;
        }
    }
    string result = "";
    if(lower >= upper){
        for(int i = 0; i < s.size(); i++) {
            result += tolower(s[i]);
        }
    }
    else if(upper > lower){
                for(int i = 0; i < s.size(); i++) {
            result += toupper(s[i]);
        }
    }
    cout << result << endl;
}