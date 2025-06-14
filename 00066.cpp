// Problem: Eolymp 66 - The Director's Visitors
// Link: https://basecamp.eolymp.com/en/problems/66

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int> >v;
    char c;
    int n, h1, m1, h2, m2, start, finish;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>h1>>c>>m1>>h2>>c>>m2;
        start = h1*60 + m1;
        finish = h2*60 + m2;
        v.push_back({finish, start});
    }
    sort(v.begin(), v.end());
    int finish_max = v[0].first;
    int say = 1;
    for(int i = 1; i < n; i++){
        if(v[i].second >= finish_max){
            finish_max = v[i].first;
            say++;
        }
    }
    cout<<say<<endl;
}
