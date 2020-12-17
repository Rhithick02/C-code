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
    int n,u,v,fl=0;
    cin>>n;
    vi edge[n+1];
    For(i,0,n-1){
        cin>>u>>v;
        edge[u].pb(v);
        edge[v].pb(u);
    }
    For(i,1,n+1){
        if(edge[i].size()==2){
            fl=1;
            break;
        }
    }
    if(fl) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}