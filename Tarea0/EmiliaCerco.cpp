#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n_personas, h_cerco, ancho_vereda = 0;
    cin>> n_personas >> h_cerco;
    vector<int> h_personas(n_personas);
    for(int i=0; i<n_personas; i++){
        cin>>h_personas[i];
        if(h_personas[i]>h_cerco){
            ancho_vereda+=2;
        }else{
            ancho_vereda+=1;
        }
    }
    cout<<ancho_vereda;
    return 0;
}