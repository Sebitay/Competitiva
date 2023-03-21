#include<iostream>
using namespace std;

int main(){
    int kilos; cin >> kilos;
    if(kilos%2!=0){
        cout<< "NO";
    }else if(kilos<3){
        cout<< "NO";
    }else{
        cout<< "YES";
    }
    return 0;
}
