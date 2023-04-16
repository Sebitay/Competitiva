#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;
    m[1]=10;
    m[2]=20;
    m[3]=5;
    m[4]=5;

    cout<<m.count(5);
    return 0;
}