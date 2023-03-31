#include<bits/stdc++.h>
using namespace std;

int main(){
    int S,L,N;
    cin>>S>>L>>N;
    vector<string> departamentos(S), fila(N);
    vector<vector<string>> pares(L,vector<string>(2));
    for(int i = 0;i < S;i++){
        cin>> departamentos[i];
    }
    for(int i = 0;i<L;i++){
        cin>>pares[i][0]>>pares[i][1];
    }
    for(int i = 0;i<N;i++){
        cin>>fila[i];
    }
    for(int i = 1;i<N;i++){
        int j = i;
        while((j>0) && (fila[j] < fila[j-1])){
            for(int k=0;k<L;k++){
                if((find(pares[k].begin(),pares[k].end(),fila[j])!=pares[k].end())&&(find(pares[k].begin(),pares[k].end(),fila[j-1])!=pares[k].end())){
                    string cambio = fila[j];
                    cout<<fila[j]<<" "<<fila[j-1]<<endl;
                    fila[j] = fila[j-1];
                    fila[j-1] = cambio;
                }
            }
            j-=1;
        }
    }
    cout<<fila[0];
    for(int i = 0;i<N;i++){
        cout<<" "<<fila[i];
    }
    return 0;
}