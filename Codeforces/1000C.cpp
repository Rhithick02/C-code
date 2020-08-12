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
    int n;
    cin>>n;
    vil ar,cnt(2*n),ans(n+1);
    vpal temp(n);
    For(i,0,n){
        cin>>temp[i].fi>>temp[i].se;
        ar.pb(temp[i].fi),ar.pb(temp[i].se+1);
    }
    sort(asc(ar));
    ar.resize(unique(asc(ar))-ar.begin());
    for(auto it: temp){
        int l=lower_bound(asc(ar),it.fi)-ar.begin();
        int r=lower_bound(asc(ar),it.se+1)-ar.begin();
        cnt[l]++,cnt[r]--;
    }
    For(i,1,2*n) cnt[i]+=cnt[i-1];
    For(i,0,2*n-1) ans[cnt[i]]+=ar[i+1]-ar[i];
    For(i,0,n) cout<<ans[i+1]<<" ";
}