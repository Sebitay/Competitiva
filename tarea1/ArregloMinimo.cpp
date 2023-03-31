#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_datos;
    cin>> n_datos;
    vector<int> a(n_datos);
    vector<int> b(n_datos);
    vector<int> index(n_datos);
    for(int i = 0; i<n_datos;i++){
        cin>>a[i];
        index[i]=i;
    }
    for(int i=0; i<n_datos;i++){
        int minimo = -1;
        int j_min;
        for(int j = 0;j<n_datos;j++){
            if(index[j]==-1){
                continue;
            }
            if(i==0){
                cin>>b[j];
            }
            if(((a[i]+b[j])%n_datos<minimo)||(minimo==- 1)){
                minimo = (a[i]+b[j])%n_datos;
                j_min = j;
            }
        }
        cout<< minimo<< " ";
        index[j_min]=-1;
    }
    return 0;
}