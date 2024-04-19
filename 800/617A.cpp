#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    int result = 0;
    int position = 0;
    while(true){
        if(position == x){
            break;
        }
        else{
            while(true){
                if(x == 0){
                    break;
                }
                else{
                    if(x - 5 >= 0){
                        x -= 5;
                        result++;
                    }
                    else if(x - 4 >= 0){
                        x -= 4;
                        result++;
                    }
                    else if(x - 3 >= 0){
                        x -= 3;
                        result++;
                    }
                    else if(x - 2 >= 0){
                        x -= 2;
                        result++;
                    }
                    else if(x - 1 >= 0){
                        x -= 1;
                        result++;
                    }
                }
            }
        }
    }
    cout << result << endl;
}