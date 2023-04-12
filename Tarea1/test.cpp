#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_datos, num;
    cin>> n_datos;
    multiset<int> b;
    for(int i = 0; i<n_datos;i++){
        cin>>num;
        b.insert(num);
    }
    auto x = b.end();
    x--;
    cout<<*x;
    return 0;
}