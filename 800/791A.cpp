#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int result = 0;
    while(true){
        if(a > b){
            break;
        }
        else{
            a *= 3;
            b *= 2;
            result++;
        }
    }
    cout << result << endl;
}