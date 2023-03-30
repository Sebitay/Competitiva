#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n_watchmen,n_pares;
    cin>>n_watchmen;
    vector<vector<int>> watchmen(n_watchmen, vector<int>(2));
    map<long long,long long> watchmen_x;
    map<long long,long long> watchmen_y;
    map<vector<int>,long long> watchmen_xy;
    vector<int> prueba(2);
    
    for(int i = 0;i<n_watchmen;i++){
        cin>>watchmen[i][0]>>watchmen[i][1];
        prueba[0]=watchmen[i][0];
        prueba[1]=watchmen[i][1];
        if(watchmen_x.find(watchmen[i][0])==watchmen_x.end()){
            watchmen_x[watchmen[i][0]]=1;
        }else{
            watchmen_x[watchmen[i][0]] = watchmen_x[watchmen[i][0]] + 1;
        }
        if(watchmen_y.find(watchmen[i][1])==watchmen_y.end()){
            watchmen_y[watchmen[i][1]]=1;
        }else{
            watchmen_y[watchmen[i][1]]+=1;
        }
        if(watchmen_xy.find(prueba)==watchmen_xy.end()){
            watchmen_xy[prueba]=1;
        }else{
            watchmen_xy[prueba]+=1;
        }
    }
    for(auto it=watchmen_x.begin(); it != watchmen_x.end();it++){
        if(it->second>=2){
            n_pares+=(it->second)*(it->second-1)/2;
        }
    }
    for(auto it=watchmen_y.begin(); it != watchmen_y.end();it++){
        if(it->second>=2){
            n_pares+=(it->second)*(it->second-1)/2;
        }
    }
    for(auto it=watchmen_xy.begin(); it != watchmen_xy.end();it++){
        if(it->second>=2){
            n_pares-=(it->second)*(it->second-1)/2;
        }
    }
    cout<< n_pares;
    return 0;
}