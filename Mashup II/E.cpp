#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long long int N;
    cin >> N;
    
    double cubeRoot = cbrt(N);
    double x = round(cubeRoot) - cubeRoot;

    if(abs(x) < 1e-9) {
        cout << static_cast<long long int>(round(cubeRoot)) << endl;
    } 
    else {
        cout << -1 << endl;
    }

}