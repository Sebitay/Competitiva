#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int op,v;
        stack<int> stack;
        queue<int> queue;
        priority_queue<int> pqueue;
        bool s = true, q = true, pq = true;
        for(int i =0;i<n;i++){
            cin>>op;
            if(op==1){
                cin>>v;
                stack.push(v);
                queue.push(v);
                pqueue.push(v);
            }else{
                cin>>v;
                if(s){
                    if((stack.empty())||(stack.top()!=v)){
                        s=false;
                    }else{
                        stack.pop();
                    }
                }
                if(q){
                    if((queue.empty())||(queue.front()!=v)){
                        q=false;
                    }else{
                        queue.pop();
                    }
                }
                if(pq){
                    if((pqueue.empty())||(pqueue.top()!=v)){
                        pq=false;
                    }else{
                        pqueue.pop();
                    }
                }
            }
        }
    if(s){
        if(q){
            cout<<"not sure"<<endl;
        }else if(pq){
            cout<<"not sure"<<endl;
        }else{
            cout<<"stack"<<endl;
        }
    }else if(q){
        if(pq){
            cout<<"not sure"<<endl;
        }else{
            cout<<"queue"<<endl;
        }
    }else if(pq){
        cout<<"priority queue"<<endl;
    }else{
        cout<<"impossible"<<endl;
    }
    }   
    return 0;
}