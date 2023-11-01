#include <bits/stdc++.h>

using namespace std;

int main(){

    stack< pair<int,int> > st;

    int n;
    cin >> n;

    int aux;
    cin >> aux;

    st.push(make_pair(aux,aux));

    int maior = aux;

    for(int i = 1; i < n; i++){

        cin >> aux;

        maior = max(aux,st.top().second);
        st.push(make_pair(aux,maior));

    }

    while(!st.empty()){

        cout << st.top().first << " " << st.top().second << "\n";
        st.pop();

    }

}