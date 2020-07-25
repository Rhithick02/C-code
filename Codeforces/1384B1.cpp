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
        int n,k,l,fl=0;
        cin>>n>>k>>l;
        vector<vi> dp(n+2,vi(2*k));
        vi ar(n+2),st(2*k);
        ar[0]=ar[n+1]=-1;
        For(i,0,n) cin>>ar[i+1];
        For(i,0,k+1) st[i]=i;
        For(i,1,k) st[k+i]=k-i;
        dp[0][0]=1;
        For(i,0,n+1){
            For(j,0,2*k){
                if(!dp[i][j]) continue;
                if(ar[i+1]+st[(j+1)%(2*k)]<=l || ar[i+1]==-1) dp[i+1][(j+1)%(2*k)]=1;
                if(ar[i]+st[(j+1)%(2*k)]<=l || ar[i]==-1) dp[i][(j+1)%(2*k)]=1;
            }
        }
        For(i, 0, 2*k) if(dp[n+1][i]) fl=1;
        if(fl) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}