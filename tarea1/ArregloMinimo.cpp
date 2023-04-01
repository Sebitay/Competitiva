#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_datos;
    cin>> n_datos;
    vector<int> a(n_datos);
    vector<int> b(n_datos);
    set<int> index;
    for(int i = 0; i<n_datos;i++){
        cin>>a[i];
        index.insert(i);
    }
    for(int i=0; i<n_datos;i++){
        int minimo = -1;
        int j_min;
        for(auto it = index.begin();it!=index.end();it++){
            if(i==0){
                cin>>b[*it];
            }
            if(((a[i]+b[*it])%n_datos<minimo)||(minimo==- 1)){
                minimo = (a[i]+b[*it])%n_datos;
                j_min = *it;
            }
        }
        cout<< minimo<< " ";
        index.erase(j_min);
    }
    return 0;
}