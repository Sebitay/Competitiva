#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_watchmen;
    cin>>n_watchmen;
    vector<vector<int>> watchmen(n_watchmen, vector<int>(2));
    map<int,int> watchmen_x;
    map<int,int> watchmen_y;
    map<vector<int>,int> watchmen_xy;
    vector<int> prueba(2);
    for(int i = 0;i<n_watchmen;i++){
        cin>>watchmen[i][0]>>watchmen[i][1];
        prueba[0]=watchmen[i][0];
        prueba[1]=watchmen[i][1];
        if(watchmen_xy.find(prueba)==watchmen_xy.end()){
            watchmen_xy[prueba]=1;
            cout<<"a";
        }else{
            watchmen_xy[prueba]+=1;
            cout<<"b";
        }
        if(watchmen_x.find(watchmen[i][0])==watchmen_x.end()){
            watchmen_x[watchmen[i][0]]=1;
        }else{
            watchmen_x[watchmen[i][0]]+=1;
        }
        if(watchmen_y.find(watchmen[i][1])==watchmen_x.end()){
            watchmen_y[watchmen[i][1]]=1;
        }else{
            watchmen_y[watchmen[i][1]]+=1;
        }
    }

    return 0;
}