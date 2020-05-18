//Catalan numbers
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
    vi dp(n+1);
    dp[0]=1,dp[1]=1;
    for(int i=2;i<=n;i++)
        dp[i]=(2*(2*i-1)*dp[i-1])/(i+1);
    cout<<dp[n]<<endl;
    return 0;
}