#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_planetas, n_rutas, p1,p2;
    cin>>n_planetas>>n_rutas;
    vector<vector<int>> grafo;
    vector<int> visited(n_planetas);
    vector<int> ruta(n_planetas);
    int distancia;
    cin>>p1>>p2;
    grafo[p1].push_back(p2);
    grafo[p2].push_back(p1);
    
    return 0;
}