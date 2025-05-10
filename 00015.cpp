// Problem: Eolymp 15 - Mouse and corns
// Link: https://basecamp.eolymp.com/en/problems/15

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>> dp(n, vector<int>(m, 0));
  
  vector<vector<int>> l(n,vector<int>(m,0));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>l[i][j];
    }
  }

  reverse(l.begin(),l.end());
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i==0 && j==0) dp[i][j]=l[i][j];
        else if(i==0) dp[i][j]=dp[i][j-1]+l[i][j];
        else if(j==0) dp[i][j]=dp[i-1][j]+l[i][j];
        else dp[i][j]=max(dp[i-1][j],dp[i][j-1])+l[i][j];
    }
  }
  int i=n-1,j=m-1;
  string cvb;
  while(i>0 || j>0){

    if(i==0){cvb+='R';j--;}
    else if(j==0){cvb+='F';i--;}
    else if(dp[i-1][j]>dp[i][j-1]){cvb+='F';i--;}
    else {cvb+='R';j--;}

    
  }

  reverse(cvb.begin(),cvb.end());
  cout<<cvb;
  
  


}
