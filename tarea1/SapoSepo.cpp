#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_moscas;
    cin>>n_moscas;
    vector<int> fila(n_moscas);
    for(int i = 0;i<n_moscas;i++){
        cin>>fila[i];
    }
    int choque=fila[0];
    int maximo =-1;
    for(int i =0;i<n_moscas;i++){
        if(i>0){
            if(fila[i-1]!=choque){
                continue;
            }
        }
        int j=i;
        set<int> especies;
        while(j<n_moscas){
            if(especies.count(fila[j])>0){
                if((j-i)>maximo){
                    maximo = j-i;
                    choque = fila[j];
                }
                break;
            }
            especies.insert(fila[j]);
            j+=1;
        }
        
    }
    if(maximo!=-1){
        cout<<maximo;
    }else{
        cout<<n_moscas;
    }
    return 0;
}