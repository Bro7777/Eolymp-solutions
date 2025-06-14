// Problem: Eolymp 75 - Pirates and Coins
// Link: https://basecamp.eolymp.com/en/problems/75

#include <iostream>

using namespace std;

int main()
{
    int a,m,n;
    cin>>a>>m;
    n=0;
    while(m>0){
        m=m-a;
        a=a+1;
        n+=1;
        if(m/2==a){
            n+=1;
            break;
        }
    }
    cout<<n;

    return 0;
}
