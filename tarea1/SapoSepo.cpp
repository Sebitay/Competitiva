#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_moscas,anterior = -1, max = 0;
    cin>>n_moscas;
    map<int,queue<int>> moscas;
    for(int i = 0;i<n_moscas;i++){
        int mosca;
        cin>> mosca;
        moscas[mosca].push(i);
        if(moscas[mosca].size()==2){
            if(anterior<moscas[mosca].front()){
                anterior = moscas[mosca].front();
            }
            if(i-anterior>=max){
                max = i - anterior;
            }
            moscas[mosca].pop();
        }else{
            if(i-anterior>max){
                max = i-anterior;
            }
        }
    }
    cout<<max;
    return 0;
}