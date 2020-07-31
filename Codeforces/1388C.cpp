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
#define MAX 200001
#define ul (ppl[start]+hpy[start])

lli n,m,u,v,fl;
vector<bool> visited(MAX);
vil ppl(MAX),hpy(MAX),road[MAX];
lli dfs(int start){
    lli h=0;
    visited[start]=true;
    for(auto it: road[start]){
        if(visited[it]) continue;
        ppl[start]+=dfs(it);
        h+=ppl[it]+hpy[it]>>1;
    }
    if(ul%2 || ul<0 || ppl[start]-hpy[start]<0 || ul/2<h) fl=0;
    return ppl[start];
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        fl=1;
        cin>>n>>m;
        visited.assign(MAX,false);
        For(i,1,n+1) road[i].clear();
        For(i,1,n+1) cin>>ppl[i];
        For(i,1,n+1) cin>>hpy[i];
        For(i,0,n-1){
            cin>>u>>v;
            road[u].pb(v);
            road[v].pb(u);
        }
        dfs(1);
        if(fl) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}