#include<iostream>
using namespace std;

int main(){
    int n_casos,h_torre1,h_torre2,n_juntas;
    string torre1, torre2;
    cin>> n_casos;
    for(int i=0;i<n_casos;i++){    
        cin>>h_torre1>>h_torre2;
        cin>>torre1>>torre2;
        n_juntas = 0;
        for(int pos = 0;pos<h_torre1-1;pos++){
            if(torre1[pos]==torre1[pos+1]){
                n_juntas+=1;
            }
        }
        for(int pos = h_torre2-1;pos>0; pos-=1){
            if(torre2[pos]==torre2[pos-1]){
                n_juntas+=1;
            }
        }
        if(torre1[h_torre1-1]==torre2[h_torre2-1]){
            n_juntas+=1;
        }
        if(n_juntas>1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}