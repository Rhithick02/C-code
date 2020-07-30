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
int n,m,u,v;
vector<bool> visited(MAX);
vi ppl(MAX),hpy(MAX),road[MAX];
int dfs(int start){
    visited[start]=true;
    for(auto it: road[start]){
        if(visited[it]) continue;
        ppl[start]+=dfs(it);
    }
    return ppl[start];
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        For(i,1,n+1) road[i].clear();
        For(i,1,n+1) cin>>ppl[i];
        For(i,1,n+1) cin>>hpy[i];
        For(i,0,n-1){
            cin>>u>>v;
            road[u].pb(v);
            road[v].pb(u);
        }
        dfs(1);        
    }
    return 0;
}