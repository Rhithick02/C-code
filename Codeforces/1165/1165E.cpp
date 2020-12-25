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
#define mod 998244353

int main(){
    ios::sync_with_stdio(false);
    lli res=0;
    int n;
    cin>>n;
    vil a(n),b(n);
    For(i,0,n){
        cin>>a[i];
        a[i]=1LL*(i+1)*(n-i)*a[i];
    }
    For(i,0,n) cin>>b[i];
    sort(asc(a)),sort(des(b));
    For(i,0,n) res+=(a[i]%mod*b[i])%mod,res%=mod;
    cout<<res<<"\n";
}