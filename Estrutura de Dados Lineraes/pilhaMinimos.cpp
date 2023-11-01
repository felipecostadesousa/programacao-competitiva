#include <bits/stdc++.h>

using namespace std;

int main(){

    stack< pair<int,int> > st;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){

        int num;
        cin >> num;

        if(st.empty()){
            st.push(make_pair(num,num));
        }
        else{
            int menor = st.top().second;
            menor = min(menor,num);
            st.push(make_pair(num,menor));
        }

    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++){

        if(!st.empty()){

            int val = st.top().second;
            st.pop();
            cout << val << endl;

        }

    }

}