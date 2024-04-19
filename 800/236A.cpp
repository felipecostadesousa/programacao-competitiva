#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;
int main() {
    string s;
    cin >> s;
    set<char> a;
    for(int i = 0; i < s.length(); i++){
        a.insert(s[i]);
    }
    if(a.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
}