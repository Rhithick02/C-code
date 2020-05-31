#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    lli sum=0;
    lli n,maxi;
    cin>>n;
    vi ar(n),st(100001);
    lli dp[100001][2];
    For(i,n) cin>>ar[i],st[ar[i]]+=ar[i];
    maxi=*max_element(ar.begin(),ar.end());
    dp[0][0]=0;
    dp[0][1]=st[maxi];
    for(lli i=maxi,j=0;i>=1;i--,j++)
    {
        dp[j+1][1]=max(dp[j][1],dp[j][0]+st[i-1]);
        dp[j+1][0]=max(dp[j][0],dp[j][1]);
        sum=max(dp[j+1][1],dp[j+1][0]);
    }    
    cout<<sum<<endl;
    return 0;
}