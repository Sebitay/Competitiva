#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n_letras;
    string palabra;
    vector<int> letras(26,0);
    cin>>n_letras;
    cin>>palabra;
    for(int i=0;i<n_letras;i++){
        letras[tolower(palabra[i]) - 'a']++;
    }
    for(int i=0;i<26;i++){
        if(letras[i]==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}