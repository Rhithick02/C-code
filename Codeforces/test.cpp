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
        lli mini=1e13,bullet=0;
        int n;
        cin>>n;
        vpal ar(n);
        pal insig={1e13,-1};
        For(i,0,n) cin>>ar[i].fi>>ar[i].se,mini=min(mini,ar[i].fi);
        For(i,0,n){
            if(ar[i].se>=ar[(i+1)%n].fi) continue;
            if(insig.fi>ar[(i+1)%n].fi-ar[i].se) insig={ar[(i+1)%n].fi-ar[i].se,(i+1)%n};
        }
        bullet+=ar[insig.se].fi;
        For(i,0,n) bullet+=max(1LL*0,ar[(i+insig.se+1)%n].fi-ar[(i+insig.se)%n].se);
        cout<<bullet<<endl;
    }
    return 0;
}
