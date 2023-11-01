#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
int main()
{
    int v[10];
    v[5] = 1;
    v[3] = 412;
    printf("%d %d\n", v[3], v[5]);
    swap(v[5], v[3]);
    printf("%d %d\n", v[3], v[5]);
    int menor = min(v[5], v[3]);
    int maior = max(v[5], v[3]);
    printf("%d %d\n", menor, maior);
}