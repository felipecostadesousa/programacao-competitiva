#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    sort(v.begin(), v.end(),less<int>());

    for(int i = 0; i < v.size(); i++)
    {
        printf("%d", v[i]);
    }
    
    printf("\n");

    sort(v.begin(), v.end(),greater<int>());

    for(int i = 0; i < v.size(); i++)
    {
        printf("%d", v[i]);
    }

}