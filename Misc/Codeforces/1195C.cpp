#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    int n,x;
    cin>>n;
    vi ar[2];
    lli dp[2][n+1];
    memset(dp,0,sizeof(dp));
    For(i,2) For(j,n) cin>>x,ar[i].pb(x);
    For(i,n)
    {
        dp[0][i+1]=max(dp[1][i]+ar[0][i],dp[0][i]);
        dp[1][i+1]=max(dp[0][i]+ar[1][i],dp[1][i]);
    }
    cout<<max(dp[0][n],dp[1][n]);
    return 0;
}