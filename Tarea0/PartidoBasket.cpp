#include<iostream>
using namespace std;

int main(){
    string partido;
    cin>> partido;
    int puntosA=0,puntosB=0;
    for(int i=0; i<partido.size();i+=2){
        if(partido[i]=='A'){
            puntosA+=partido[i+1] - 48;
        }else{
            puntosB+=partido[i+1] - 48;
        }
    }
    if(puntosA>puntosB){
        cout<< "A";
    }else{
        cout<< "B";
    }
    return 0;
}