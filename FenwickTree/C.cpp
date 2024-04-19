#include <bits/stdc++.h>

using namespace std;

int sum(int idx, vector<int>& F)
{
    int runningSum = 0;
    while (idx > 0) {
        runningSum += F[idx];
        int rightMostSetBit = (idx & (-idx));
        idx -= rightMostSetBit;
    }
    return runningSum;
}

void add(int idx, int X, vector<int>& F)
{
    while (idx < F.size()) {
        F[idx] += X;
        int rightMostSetBit = (idx & (-idx));
        idx += rightMostSetBit;
    }
}

int rangeQuery(int l, int r, vector<int>& F)
{
    return sum(r, F) - sum(l - 1, F);
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        cout << "Case " << i+1 << ":" << endl;
        int n,q;
        cin  >> n >> q;
        vector<int> array;
        vector<int> F(n + 1, 0);
        for(int j = 0; j < n; j++){
            int aux;
            cin >> aux;
            array.push_back(aux);
        }
        for (int j = 0; j <= n; j++) {
            add(j, array[j], F);
        }
        for(int j = 0; j < q; j++){
            int operation, indexI;
            cin >> operation >> indexI;
            if(operation == 1){
                for(int k = 0; k < n; k++){
                    cout << F[k] << " ";
                }
            }
            else if(operation == 2){
                int money;
                cin >> money;
            }
            else if(operation == 3){
                int indexJ;
                cin >> indexJ;
            }
        }
    }
}