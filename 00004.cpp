// Problem: Eolymp 4 - Two circles
// Link: https://basecamp.eolymp.com/en/problems/4

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double x1,x2,y1,y2,r1,r2,radius,mesafe;
    cin>>x1>>y1>>r1;
    cin>>x2>>y2>>r2;
    mesafe=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    radius=(r1+r2)*(r1+r2);
    double radius1=(r1-r2)*(r1-r2);
    double ferq=0.001;
    if(x1==x2 && y1==y2 && r1==r2){
        cout<<-1<<endl;
    }
    else if(fabs(mesafe-radius)<ferq){
        cout<<1<<endl;
    }
    else if(fabs(mesafe-radius1)<ferq){
        cout<<1<<endl;
    }
    else if(mesafe>radius){
        cout<<0<<endl;
    }
    else if(mesafe<radius1){
        cout<<0<<endl;
    }
    
    else{
        cout<<2<<endl;
    }

}

