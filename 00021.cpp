// Problem: Eolymp 21 - Corruption
// Link: https://basecamp.eolymp.com/en/problems/21

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    multiset<double>s;
    cin >> n >> p;

    while(n--)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    while(s.size()>1)
    {
        float a = *s.begin();
        s.erase(s.begin());
        float b = *s.begin();
        s.erase(s.begin());

        s.insert((a + b) * (100-p)/100);
    }

    cout << fixed << setprecision(2) << *s.begin();
}
