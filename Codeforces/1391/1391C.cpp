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
#define mod 1000000007

int main(){
    ios::sync_with_stdio(false);
    lli n,cnt=1,res=0;
    cin>>n;
    vil st(n+1);
    st[0]=st[1]=1;
    For(i,2,n+1) st[i]=(1LL*i*st[i-1])%mod;
    res=st[n];
    For(i,0,n-1) cnt*=2,cnt%=mod;
    res=(st[n]-cnt+mod)%mod;
    cout<<res<<"\n";
}