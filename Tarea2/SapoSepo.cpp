#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_planetas, n_rutas, p1,p2;
    cin>>n_planetas>>n_rutas;
    vector<set<int>> grafo(n_planetas+1);
    vector<int> dist(n_planetas+1,-1);
    vector<int> parent(n_planetas+1,-1);
    queue<int> cola;
    stack<int> ruta;
    for(int i =0;i<n_rutas;i++){
        cin>>p1>>p2;
        grafo[p1].insert(p2);
        grafo[p2].insert(p1);
    }
    int inicial = 1;
    dist[inicial] = 1;
    cola.push(inicial);
    while(!cola.empty()){
        int u =  cola.front();cola.pop();
        for(int v : grafo[u]){
            if(dist[v] == -1){
                dist[v] = dist[u] + 1;
                parent[v] = u;
                cola.push(v);
            }
        }
    }
    if(dist[n_planetas] == -1){
        cout<<"IMPOSSIBLE";
    }else{
        cout<<dist[n_planetas]<<endl;
        int p = parent[n_planetas];
        ruta.push(n_planetas);
        while(p!=-1){
            ruta.push(p);
            p = parent[p];
        }
    }
    while(!ruta.empty()){
        cout<<ruta.top()<<" ";
        ruta.pop();
    }
    return 0;
}