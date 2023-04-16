#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    char celda;
    cin>>n>>m>>k;
    map<pair<int,int>,set<pair<int,int>>> grafo;
    set<pair<int,int>> celdas;
    map<pair<int,int>,int> dist;
    multiset<int> distancias;
    multiset<int> porcambiar;
    queue<pair<int,int>> cola;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>celda;
            if(celda == '.'){
                celdas.insert({i,j});
                if(celdas.count({i+1,j})>0){
                    grafo[{i,j}].insert({i+1,j});
                    grafo[{i+1,j}].insert({i,j});
                }
                if(celdas.count({i-1,j})>0){
                    grafo[{i,j}].insert({i-1,j});
                    grafo[{i-1,j}].insert({i,j});
                }
                if(celdas.count({i,j+1})>0){
                    grafo[{i,j}].insert({i,j+1});
                    grafo[{i,j+1}].insert({i,j});
                }
                if(celdas.count({i,j-1})>0){
                    grafo[{i,j}].insert({i,j-1});
                    grafo[{i,j-1}].insert({i,j});
                }
            }
        }
    }
    pair<int,int> inicial = *celdas.begin();
    dist[inicial]=0;
    distancias.insert(dist[inicial]);
    cola.push(inicial);
    while(!cola.empty()){
        pair<int,int> u = cola.front(); cola.pop();
        for(pair<int,int> v : grafo[u]){
            if(dist.count(v)==0){
                dist[v]=dist[u]+1;
                distancias.insert(dist[v]);
                cola.push(v);
            }
        }
    }
    auto ultima = distancias.end();
    auto primera = distancias.begin();
    ultima--;
    for(int i = 0;i<k;i++){
        porcambiar.insert(*ultima);
        ultima--;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(celdas.count({i,j})){
                if(porcambiar.count(dist[{i,j}])>0){
                    cout<<'X';
                    porcambiar.erase(porcambiar.find(dist[{i,j}]));
                }else{
                    cout<<'.';
                }
            }else{
                cout<<'#';
            }
        }
        cout<<endl;
    }
    return 0;
}