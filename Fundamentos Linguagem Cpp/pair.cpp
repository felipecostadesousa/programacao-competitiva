#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int,int> p1 = make_pair(0,1);
    pair<int,int> p2 = make_pair(1,0);
    pair<int,double> p3 = make_pair(100,3.15);
    pair<string,int> p4 = make_pair("Tom and Jerry", 1);
    pair<int,int> p5 = make_pair(3,1);
    pair<int,int> p6 = make_pair(2,2);

    printf("(%d,%d)\n",p1.first,p1.second);
    printf("(%d,%d)\n",p2.first,p2.second);
    printf("(%d,%lf)\n",p3.first,p3.second);
    printf("(%s,%d)\n",p4.first.c_str(),p4.second);

    if(p5>p6){
        printf("p5 > p6 \n");
    }
    else{
        printf("p5 < p6 \n");
    }

    if(p5.second>p6.second){
        printf("p5 > p6 \n");
    }
    else{
        printf("p5 < p6 \n");
    }

    return 0;
}