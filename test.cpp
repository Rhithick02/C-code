#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

bool possible(lli mask,vector<lli> ar,vector<lli> pref,int n, int k)
{
    bool dp[n+1][k+1];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=k;j++)
            for(int l=i-1;l>=0;l--)
                if(dp[l][j-1] && ((pref[i]-pref[l])&mask)==mask)
                {
                    dp[i][j]=1;
                    break;
                }
    return dp[n][k];
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<lli> ar(n+1),pref(n+1);
    For(i,n) cin>>ar[i+1];
    For(i,n) pref[i+1]=pref[i]+ar[i+1];
    lli ans=0;
    for(int i=63;i>=0;i--)
        if(possible(ans | (lli)pow(2,i),ar,pref,n,k)) ans=(ans | (lli)pow(2,i));
    cout<<ans;
    return 0;
}