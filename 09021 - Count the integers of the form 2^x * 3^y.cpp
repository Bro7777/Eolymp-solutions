#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // example below, replace it with your solution
    long long n;
    long long k=1000000000000000000;
    int m1=log2(k);
    int m2=37;
    vector<long long>l;
    long long eded=1;
    for(int i=0;i<=m2;i++){
        if(i!=0) eded=eded*3;
        long long x=1;
        while(eded*x<=k){
            l.push_back(eded*x);
            x*=2;
        }

    }
    sort(l.begin(),l.end());

   // cout<<m1<<" "<<m2<<endl;
    //for(long long x:l) cout<<x<<" ";
    long long a,b;
    while(cin>>a>>b){
        auto it1=lower_bound(l.begin(),l.end(),a);
        auto it2=upper_bound(l.begin(),l.end(),b);
        cout<<it2-it1<<endl;

    }

}
