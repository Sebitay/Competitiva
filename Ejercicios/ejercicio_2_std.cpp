#include<iostream>
using namespace std;

int main(){
    string palabra;
    int rotaciones=0;
    char ultima_letra='a';
    cin>>palabra;
    for(int i = 0;i<palabra.size();i++){
        rotaciones += min(26 - abs((int) palabra[i]-ultima_letra),abs((int) palabra[i]-ultima_letra));
        ultima_letra = palabra[i];
    }
    cout<<rotaciones;
    return 0;
}