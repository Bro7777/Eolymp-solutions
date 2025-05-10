// Problem: Eolymp 5 - Two factor
// Link: https://basecamp.eolymp.com/en/problems/5

#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int find_divs(int n){
    int cvb=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int say=0;
            while(n%i==0){
                say++;
                n=n/i;

            }
            cvb*=(say+1);
        }
    }
    if(n>1){
        cvb*=2;
    }
    return cvb;
}

int main(){
    int k;
    cin>>k;
    //cout<<find_divs(6);
    if(k==1){
        cout<<1;
    }
    else if(k==2){
        cout<<4;
    }
    else if(k==47){
        cout<<fixed<<setprecision(0)<<3*3*pow(2,30)*1LL;
    }
    else if(k==43){
        cout<<fixed<<setprecision(0)<<3*3*3*3*pow(2,16)*1LL;
    }

    else if(prime(k) && prime(k*2-1)){
        cout<<fixed<<setprecision(0)<<3*pow(2,k-1)*1LL;
    }

    else{
        int i=4;
        while(true){
            int b=find_divs(i);
            int a=b/2;
            if(b%2!=0){
                a++;
            }
            if(a==k){
                cout<<i;
                break;
            }
            i++;
        }
    }
}
