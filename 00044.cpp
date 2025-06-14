// Problem: Eolymp 44 - The number of ones
// Link: https://basecamp.eolymp.com/en/problems/44

#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

int main() {
    

    int n;
    cin>>n;
    int l[n+1];
    l[1]=1;
    for(int i=2;i<=n;i++){
        l[i]=INF;
        for(int j=1;j<=i/2;j++){
            l[i]=min(l[i],l[j]+l[i-j]);
        }
        for(int j=1;j*j<=n;j++){
            if(i%j==0){
            l[i]=min(l[i],l[j]+l[i/j]);
            }
        }
    }
    cout<<l[n];
}
