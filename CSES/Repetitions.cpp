#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int result = 1;
    int max = 1;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            result++;
        }
        else{
            result = 1;
        }
        if(result > max){
            max = result;
        }
    }
    cout << max << endl;
}