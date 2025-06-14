// Problem: Eolymp 33 - The favorite numbers of Santa Claus
// Link: https://basecamp.eolymp.com/en/problems/33

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<bool>v(500001,true);
    v[0]=v[1]=false;
    for(int i=2;i*i<=500000;i++){
        if(v[i]){
            for(int j=i*i;j<=500000;j+=i){
                v[j]=false;
            }
            
        }
        
    }

    int a,b;
    cin>>a>>b;
    int say=0;
    for(int i=a;i<=b;i++){

        if(v[i]){
            int f=true;
            int istart=i;
            while(istart>0){
                if(istart%100==13){
                   f=false;
                   break;
                }
                istart=istart/10;
            }
            if(f){
                say++;
            }
    }
    
    
}cout<<say<<endl;}
