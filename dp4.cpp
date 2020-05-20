//Bell numbers- Number of ways to partition a set
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

int main(){
    int n;
    cin>>n;
    int dp[n+2][n+2];
    memset(dp,0,sizeof(dp));
    For(i,n+1)
        For(j,n+1) dp[i][j]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<i;j++)
                dp[i][j+1]=dp[i][j]+dp[i-1][j];
        dp[i+1][1]=dp[i][i];
    }
    cout<<dp[n][n];
    return 0;
}