#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

pair<int, int> twoPointers(vector<int>& vetor, int m, int n) {
    int l = 0;
    int r = n - 1;
    pair<int, int> p = make_pair(vetor[l], vetor[r]);
    
    while (l < r) {
        int soma = vetor[l] + vetor[r];
        int diferenca = abs(vetor[l] - vetor[r]);

        if (soma == m) {
            return make_pair(vetor[l], vetor[r]);
        } else if (soma < m) {
            l++;
        } else {
            r--;
        }
        
        if (diferenca < abs(p.first - p.second)) {
            p = make_pair(vetor[l], vetor[r]);
        }
    }
    
    return p;
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (p < m) {
            v.push_back(p);
        }
    }

    sort(v.begin(), v.end());

    pair<int, int> resultado = twoPointers(v, m, n);

    cout << resultado.first << " " << resultado.second << endl;

    return 0;
}
