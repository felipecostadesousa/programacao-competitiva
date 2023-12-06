#include <bits/stdc++.h>

using namespace std;

bool isSet(int bitPosition, int number){
    return ((number & (1 << bitPosition)) != 0);
}

int setBit(int bitPosition, int number){
    return (number | (1 << bitPosition));;
}

int LSB(int number){
    return (number&-number);
}

int posLSB(int number){
    return log2(number & -number);
}
int addElement(int bitmask, int elementPosition){
    bitmask = bitmask | (1 << elementPosition);
    return bitmask;
}

bool hasElement(int bitmask, int elementPosition){
    bool ret = ((bitmask & (1 << elementPosition)) != 0);
    return ret;
}

int uniao(int bitmaskA, int bitmaskB){
    return (bitmaskA | bitmaskB);
}

int intersection(int bitmaskA, int bitmaskB){
    return (bitmaskA & bitmaskB);
}

void possibleSubsets(char S[], int N){
    for(int i = 0; i < (1 << N); i++){
        for(int j = 0; j < N; j++){
            if(i & (1 << j)){
                cout << S[j] << endl;
            }
        }
        cout << endl;
    }
}

void complete_search_bitmask(){
    vector<int> v({1,2,3,4,5});
    int n = v.size();
    for(int bitmask = 0; bitmask < (1 << n); bitmask++){
        cout << "[ ";
        for(int i = 0; i < n; i++) {
            if(isSet(i,bitmask)) {
                cout << v[i] << " ";
            }
        }
        cout << "]" << endl;
    }
}

int main(){

    int n,m;
    unsigned int un;

    n = 5;
    m = 9;
    un = 5;

    cout << n << " " << ~n << endl;
    cout << un << " " << ~un << endl;
    cout << n << " AND " << m << " = " << (n&m) << endl;
    cout << n << " OR " << m << " = " << (n|m) << endl;
    cout << n << " XOR " << m << " = " << (n^m) << endl;
    cout << "(1 << 1) = " << (1<<1) << endl;
    cout << "(1 << 2) = " << (1<<2) << endl;
    cout << "(1 << 3) = " << (1<<3) << endl;
    cout << "(1 << 4) = " << (1<<4) << endl;
    cout << "(2 << 4) = " << (2<<4) << endl;
    cout << "(5 >> 1) = " << (5>>1) << endl;

    if(isSet(9, 1)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    cout << setBit(10,2) << endl;

    int bitmask = 12;


    cout << "Bit 2 is on? Ans: " << isSet(bitmask,2) << endl;
    cout << "Bit 3 is on? Ans: " << isSet(bitmask,3) << endl;
    cout << "Change bit 2, we get: " << setBit(bitmask,2);

}