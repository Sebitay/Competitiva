#include<iostream>
using namespace std;

int main(){
    string partido;
    cin>> partido;
    int puntosA=0,puntosB=0;
    for(int i=0;i<partido.size();i+=2){
        if ((puntosA<10)&&(puntosB<10)){
            if(partido[i]='A'){
                puntosA+=partido[i+1];
            }else {
                puntosB+=partido[i+1];
            }
            if((puntosA=11)){
                cout<<"A1"<<endl;
                return 0;
            }else if(puntosB=11){
                cout<<"B1"<<endl;
                return 0;
            }
        
        }else if(((partido[i]='A')&&(partido[i+2]='A'))||((partido[i]='A')&&(partido[i+1]=2))){
            cout<< "A2"<<endl;
            return 0;
        }else if((partido[i]='B')&&(partido[i+2]='B')||((partido[i]='B')&&(partido[i+1]=2))){
            cout<< "B2"<<endl;
            return 0;
        }
    }
    return 0;
}