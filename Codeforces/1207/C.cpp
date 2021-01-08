#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define pa pair<int,int>
#define pal pair<long long,long long>
#define vpa vector<pair<int,int>>
#define vpal vector<pair<long long,long long>>
#define fi first
#define se second

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        string s;
        cin>>n>>a>>b>>s;
        vector<vil> dp(2,vil(n+1,1e18));
        dp[0][0]=b;
        For(i,0,n){
            if(s[i]=='1') dp[1][i+1]=dp[1][i]+a+2*b;
            else{
                dp[0][i+1]=min(dp[1][i]+2*a+b,dp[0][i]+a+b);
                dp[1][i+1]=min(dp[1][i]+a+2*b,dp[0][i]+2*(a+b));
            }
        }
        cout<<dp[0][n]<<endl;
    }
    return 0;
}