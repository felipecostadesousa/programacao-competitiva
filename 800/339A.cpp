#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<char> v;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '+'){
            v.push_back(s[i]);
        }
    }
    sort(v.begin(), v.end(),less<int>());
    string result = "";
    for(int i = 0; i < v.size(); i++){
        result += v[i];
        if(i != v.size()-1){
            result += "+";
        }
    }
    cout << result << endl;
}