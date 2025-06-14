// Problem: Eolymp 109- Page numbering
// Link: https://basecamp.eolymp.com/en/problems/109

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // n sayısını kullanıcıdan alın

    int m = 1; 
    int pageCounter = 1; 
    while (pageCounter < n) {
        m++; 
        int temp = m;
        while (temp > 0) {
            pageCounter++; 
            temp /= 10; 
        }
    }
    if(pageCounter>n){
        cout<<0;
        return 0;
    }

    cout << m << endl; 

    return 0;
}
