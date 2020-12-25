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
    int n,m;
    cin>>n>>m;
    vil ar(n),pref(n),dp(n);
    For(i,0,n) cin>>ar[i];
    sort(asc(ar));
    pref[0]=ar[0];
    For(i,1,n) pref[i]=ar[i]+pref[i-1];
    For(i,0,n)
    {
        dp[i]=pref[i];
        if(i>=m) dp[i]+=dp[i-m];
    }
    for(auto it: dp) cout<<it<<" ";
    cout<<endl;
    return 0;
}