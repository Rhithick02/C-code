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

int child[MAX]={0},height[MAX]={0};
vector<bool> visited(MAX);

int dfs(vi edge[],int start,int level){
    visited[start]=true;
    height[start]=level;
    for(auto it: edge[start]){
        if(visited[it]) continue;
        child[start]+=dfs(edge,it,level+1);
    }
    return child[start]+1;
}

int main(){
    ios::sync_with_stdio(false);
    lli sum=0;
    int n,k,u,v;
    cin>>n>>k;
    vi ans(n),edge[n+1];
    vector<bool> visited(n+1);
    For(i,0,n-1){
        cin>>u>>v;
        edge[u].pb(v);
        edge[v].pb(u);
    }
    dfs(edge,1,0);
    For(i,1,n+1) ans[i-1]=height[i]-child[i];
    sort(des(ans));
    For(i,0,k) sum+=ans[i];
    cout<<sum<<endl;
    return 0;
}