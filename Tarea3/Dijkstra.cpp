#include <bits/stdc++.h>
using namespace std;

long long INF = LLONG_MAX;

int main(){
	int n, m; cin >> n >> m;

	vector <vector <pair<int,long long>>> adj(n); 
	for(int i=0; i<m; i++){
		int u, v;
		long long w;
		cin >> u >> v >> w;
		u--; 
		v--;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}

	using state = pair<long long,int>;
	priority_queue <state, vector<state>, greater<state>> pq;
	vector <long long> dist(n, INF);

	pq.push({0,0});
	dist[0] = 0;

	while(!pq.empty()){
		auto [peso_camino, u] = pq.top(); 
		pq.pop();

		if(peso_camino != dist[u]) continue; 

		for(auto [v, w] : adj[u]){ 
			if(peso_camino + w < dist[v]){
				dist[v] = peso_camino+w;
				pq.push({dist[v], v});
			}
		}
	}
    if(dist[n-1] == INF){
        cout<<-1;
    }else{
        int nodo = n-1;
        stack<int> orden;
        orden.push(nodo);
        while(nodo!=0){
            int anterior;
            long long min = INF;
            //cout<<nodo<<endl;
            for(auto [v, w] : adj[nodo]){
                //cout<<v<<w<<' '<<dist[v]<<' '<<min<<endl;
                if(dist[v]+w<min){
                    min = dist[v]+w;
                    anterior = v;
                }
            }
            //cout<<'-';
            nodo = anterior;
            orden.push(nodo);
        }
        while(!orden.empty()){
            cout<<orden.top()+1<<' ';
            orden.pop();
        }
    }
	return 0;
}