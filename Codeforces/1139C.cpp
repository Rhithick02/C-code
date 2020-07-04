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
lli cnt;

lli fast(lli x,lli y){
    if(!y) return 1;
    else if(y==1) return x%mod;
    else if(y&1) return x*fast(x,y-1)%mod;
    else return fast(x*x%mod,y/2)%mod;
}

void dfs(vpa ar[],int start,vector<bool> &visited){
    visited[start]=true;
    cnt++;
    for(auto it: ar[start]){
        if(visited[it.fi]) continue;
        visited[it.fi]=true;
        dfs(ar,it.fi,visited);
    }    
}

int main(){
    ios::sync_with_stdio(false);
    lli n,k,u,v,x,res;
    cin>>n>>k;
    vpa ar[n+1];
    For(i,0,n-1){
        cin>>u>>v>>x;
        if(x) continue;
        ar[u].pb({v,x});
        ar[v].pb({u,x});
    }
    res=fast(n,k);
    vector<bool> visited(n+1,false);
    For(i,1,n+1){
        if(visited[i]) continue;
        cnt=0;
        dfs(ar,i,visited);
        res=(res-fast(cnt,k)+mod)%mod;
    }
    cout<<(res+mod)%mod<<endl;
    return 0;
}