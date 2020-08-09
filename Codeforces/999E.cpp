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
int cnt,n,m,s,u,v,ans;
vi ar[MAX];
vector<bool> visited(MAX),temp(MAX);
vpa st;
void dfs(int start){
    visited[start]=true;
    for(auto it: ar[start]){
        if(visited[it]) continue;
        dfs(it);
    }
}
void dfs2(int start){
    temp[start]=true;
    cnt++;
    for(auto it: ar[start]){
        if(temp[it] || visited[it]) continue;
        dfs2(it);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m>>s;
    For(i,0,m){
        cin>>u>>v;
        ar[u].pb(v);
    }
    dfs(s);
    For(i,1,n+1){
        if(visited[i]) continue;
        For(i,1,MAX) temp[i]=false;
        cnt=0;
        dfs2(i);
        st.pb({cnt,i});
    }
    sort(des(st));
    for(auto it: st){
        if(visited[it.se]) continue;
        ans++;
        dfs(it.se);
    }
    cout<<ans<<"\n";
}