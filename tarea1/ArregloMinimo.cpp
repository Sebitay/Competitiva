#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_datos, num;
    cin>> n_datos;
    queue<int> a;
    multiset<int> b;
    for(int i = 0; i<n_datos;i++){
        cin>>num;
        a.push(num);
    }
    for(int i = 0; i<n_datos;i++){
        cin>>num;
        b.insert(num);
    }
    while(!a.empty()){
        num = a.front();
        int ideal = n_datos - num;
        auto x = b.end();
        x--;
        if((ideal<=*x)&&(ideal>*b.begin())){
            while(ideal<=*x){
                if(b.find(ideal)!=b.end()){
                    cout<<(num+*b.find(ideal))%n_datos<<" ";
                    b.erase(b.find(ideal));
                    break;
                }
                ideal++;
            }
            a.pop();
            continue;
        }
        cout<<(num+*b.begin())%n_datos<< " ";
        b.erase(b.begin());
        a.pop();
    }
    return 0;
}