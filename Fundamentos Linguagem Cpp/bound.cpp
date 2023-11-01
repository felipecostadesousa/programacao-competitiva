#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);

    auto ub = upper_bound(v.begin(), v.end(), 5);
    auto lb = lower_bound(v.begin(), v.end(), 5);

    printf("Lowerbound: %d , Upperbound: %d\n", *lb, *ub);

}