// Problem: Eolymp 22 - Mirror Prime Numbers
// Link: https://basecamp.eolymp.com/en/problems/22

#include <bits/stdc++.h>
using namespace std;
bool f(int a){
    if(a==1){
        return false;
    }
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b;
    cin>>a>>b;
    int say=0;
    for(int j=a;j<=b;j++){
        int ters=0;
        int i=j;
        if(f(i)==true){
            while(i>0){
                ters=ters*10+i%10;
                i=i/10;
            }
            if(f(ters)==true){
                //cout<<ters<<endl;
                say++;
            }

        }
    }
    cout<<say<<endl;
}
