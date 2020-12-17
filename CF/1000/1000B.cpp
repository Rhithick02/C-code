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
    lli n,m,res=0;
    cin>>n>>m;
    vil ar(n+2),on,off;
    For(i,1,n+1) cin>>ar[i];
    ar[n+1]=m;
    For(i,1,n+2){
        if(i&1) on.pb(ar[i]-ar[i-1]);
        else off.pb(ar[i]-ar[i-1]);
    }
    For(i,1,on.size()) on[i]+=on[i-1];
    For(i,1,off.size()) off[off.size()-1-i]+=off[off.size()-i];
    For(i,0,off.size()) res=max(res,on[i]+off[i]-1);
    cout<<max(on[on.size()-1],res)<<"\n";
}