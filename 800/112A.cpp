#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    cin >> s1;
    cin >> s2;
    int result = 0;
    for(int i = 0; i < s1.length(); i++){
        if(tolower(char(s1[i])) < tolower(char(s2[i]))){
            result--;
            break;
        }
        else if(tolower(char(s1[i])) > tolower(char(s2[i]))){
            result++;
            break;
        }
    }
    cout << result;
}