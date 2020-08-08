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
#define MAX 5001
void dfs(int start,vector<bool> &visited,vi ar[]){
    visited[start]=true;
    for(auto it: ar[start]){
        if(visited[it]) continue;
        dfs(it);
    }
}
int main(){
    ios::sync_with_stdio(false);
    int n,m,s,u,v,ans=0;
    cin>>n>>m>>s;
    vi ar[n+1];
    vector<bool> visited(n+1);
    For(i,0,m){
        cin>>u>>v;
        ar[u].pb(v);
    }
    For(i,1,n+1){
        if(visited[i]) continue;
        ans++;
        dfs(s,visited,ar);
    }
}