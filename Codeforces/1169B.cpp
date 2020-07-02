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
    vi x;
    vpa ar(m);
    For(i,0,m) cin>>ar[i].fi>>ar[i].se;
    x.pb(ar[0].fi);
    x.pb(ar[0].se);
    for(auto it: x){
        int tot=0;
        vi st(n+1);
        for(auto te: ar) if(te.fi!=it && te.se!=it) st[te.fi]++,st[te.se]++,tot++;
        if(tot==*max_element(asc(st))){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}