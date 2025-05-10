// Problem: Eolymp 14 - The Ticket Chase
// Link: https://basecamp.eolymp.com/en/problems/14

#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<bool>eratosfen(1000001,true);

    eratosfen[0]=eratosfen[1]=false;
    for(int i=2;i*i<=1000000;i++){
        if(eratosfen[i]){
          for(int j=i*i;j<=1000000;j+=i){
            eratosfen[j]=false;
          }
        }
    }

    int n,m;
    cin>>n>>m;
    bool f=false;
    for(int i=m+1;i<=n+m-1;i++){
        //cout<<i<<" "<<eratosfen[i]<<endl;
        if(eratosfen[i]){
            f=true;
            cout<<i-m-1;
            return 0;
        }

    }
    if(!f){
        cout<<-1;
    }
    
}
