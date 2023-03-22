#include<iostream>
using namespace std;

int main(){
    long long hc,dc,hm,dm;
    int n_casos,k,w,a, hitsC, hitsM;
    cin>> n_casos;
    for(int i=0;i<n_casos;i++){
        int ka=0,kw,c,m;
        bool status = false;
        cin>>hc>>dc;
        cin>>hm>>dm;
        cin>>k>>w>>a;
        while(ka<=k){
            kw=k-ka;
            c=0;
            m=0;
            while(hm>c*(dc+w*kw)){
                c++;
            }
            while(hc+a*ka>m*dm){
                m++;
            }
            if(c<=m){
                status = true;
                break;
            }
            ka++;
        }
        if(status){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}