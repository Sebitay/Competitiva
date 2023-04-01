#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_moscas,choque = 0, max = 0,size;
    cin>>n_moscas;
    vector<int> moscas(n_moscas);
    for(int i = 0;i<n_moscas;i++){
        cin>> moscas[i];
    }
    for(int i = 0;i<n_moscas;i++){
        if(i>0){
            if(moscas[i-1]!=choque){
                continue;
            }
        }
        set<int> especies;
        for(int j=i;j<n_moscas;j++){
            if(especies.count(moscas[j])>0){
                choque = moscas[j];
                break;
            }
            especies.insert(moscas[j]);
        }
        size = especies.size();
        if(max<size){
            max = size;
        }
    }
    cout<<max;
    return 0;
}