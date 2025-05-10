// Problem: Eolymp 10 - Gardener
// Link: https://basecamp.eolymp.com/en/problems/10

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double n;
    int say=0;
    double cem=0,k;
    cin>>n;
    int n1=n;
    while(true){
        k=1/n;
        cem+=k;
        //cout<<k<<" "<<cem;
        n--;
        if(cem<=0.5) say++;
        else{
            break;
        }
        
    }
    cout<<n1-say<<endl;
}
