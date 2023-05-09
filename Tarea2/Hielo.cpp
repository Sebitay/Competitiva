#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_celdas,x,y,i=-1;
    map<pair<int,int>,set<pair<int,int>>> grafo;
    map<int,set<pair<int,int>>> celdas_x,celdas_y;
    set<pair<int,int>> por_visitar;
    queue<pair<int,int>> cola;
    cin>>n_celdas;
    for(int i = 0;i<n_celdas;i++){
        cin>>x>>y;
        for(pair a : celdas_x[x]){
            grafo[{x,y}].insert(a);
            grafo[a].insert({x,y});
        }
        for(pair xy : celdas_y[y]){
            grafo[{x,y}].insert(xy);
            grafo[xy].insert({x,y});
        }
        celdas_x[x].insert({x,y});
        celdas_y[y].insert({x,y});
        por_visitar.insert({x,y});
    }
    while(!por_visitar.empty()){
        i++;
        pair<int,int> inicial = *por_visitar.begin();
        cola.push(inicial);
        while(!cola.empty()){
            pair<int,int> u = cola.front();
            cola.pop();
            cout<<'a';\
            for(pair<int,int> v : grafo[u]){
                if(por_visitar.count(v) > 0){
                    cola.push(v);
                    por_visitar.erase(v);
                }
            }
        }
    }
    cout<<i;
    return 0;
}