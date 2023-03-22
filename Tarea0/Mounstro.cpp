#include<iostream>
using namespace std;

int main(){
    long long hc,dc,hm,dm, hitsC, hitsM;
    int k,w,a,n_casos;
    cin>> n_casos;
    for(int i=0;i<n_casos;i++){
        int kw;
        int status = 0;
        cin>>hc>>dc;
        cin>>hm>>dm;
        cin>>k>>w>>a;
        for(int ka=0;(ka<=k);ka++){
            kw=k-ka;
            hitsC=(hc+a*ka)/dm;
            if((hc+a*ka)%dm!=0){
                hitsC+=1;
            }
            hitsM=hm/(dc+w*kw);
            if(hm%(dc+w*kw)!=0){
                hitsM+=1;
            }
            if(hitsC>=hitsM){
                status = 1;
                ka = k+1;
            }

        }
        if(status == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}