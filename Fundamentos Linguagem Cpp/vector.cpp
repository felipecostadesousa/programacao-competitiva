#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1(100,5);
    vector<double> vd;
    vector<string> vs;
    vector<int> v;
    //vector< pair<int,int> > vpair = {{1, 2}, {3, 4}, {5, 6}};
    
    v.push_back(9);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(45);
    v.push_back(33);
    v.push_back(13);

    v.pop_back();

    //vector<int>::iterator i = v.begin();
    //i++;

    int n = v.size();

    //for(int i=0; i<n; i++){
    //    cout<< v[i] << endl;
    //}

    printf("%d %d %d\n", v[0], v[1], v[2]);

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
}