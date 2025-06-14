// Problem: Eolymp 108 - Median number
// Link: https://basecamp.eolymp.com/en/problems/108

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,cem,m1,m2;
    cin>>a>>b>>c;
    cem=a+b+c;
    m1=max(max(a,b),c);
    m2=min(min(a,b),c);
    cout<<cem-m1-m2;

}
