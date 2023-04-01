#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_datos, num;
    cin>> n_datos;
    multiset<int> b;
    for(int i = 0; i<n_datos;i++){
        cin>>num;
        b.insert(num);
    }
    auto x = b.end();
    x--;
    cout<<*x;
    return 0;
}

        if((ideal<=*x)&&(ideal>*b.begin())){
            while(ideal<=*x){
                if(b.find(ideal)!=b.end()){
                    cout<<(num+*b.find(ideal))%n_datos<<" ";
                    b.erase(b.find(ideal));
                    break;
                }
                ideal++;
            }
            continue;
        }
        cout<<(num+*b.begin())%n_datos<< " ";
        b.erase(b.begin());
        a.pop();