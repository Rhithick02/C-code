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
    int n,m,u,v;
    cin>>n>>m;
    pa te={0,0};
    vi ar[n+1];
    For(i,0,m){
        cin>>u>>v;
        ar[u].pb(v);
        ar[v].pb(u);
        if(ar[u].size()>te.fi) te={ar[u].size(),u};
        if(ar[v].size()>te.fi) te={ar[v].size(),v};
    }
    vector<bool> visited(n+1);
    queue<int> q;
    visited[te.se]=true;
    q.push(te.se);
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(auto it: ar[cur]){
            if(visited[it]) continue;
            cout<<cur<<" "<<it<<"\n";
            visited[it]=true;
            q.push(it);
        }
    }
}