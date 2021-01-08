#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
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
void dfs(int start,int ans[],vi ar[],bool visited[],int count)
{
    visited[start]=true;
    ans[start]=count;
    for(auto it: ar[start])
        if(!visited[it]) dfs(it,ans,ar,visited,count);
}
int main(){
    int n,m,count=0;
    cin>>n>>m;
    vi ar[n+1];
    int ans[n+1];
    For(i,m)
    {
        int k;
        cin>>k;
        int te[k];
        For(j,k) cin>>te[j];
        for(int j=1;j<k;j++)
        {
            ar[te[j]].pb(te[j-1]);
            ar[te[j-1]].pb(te[j]);
        }
    }
    bool visited[n+1]={false};
    For(i,n)
    {
        if(visited[i+1]) continue;
        dfs(i+1,ans,ar,visited,count);        
        count++;
    }
    int store[count];
    memset(store,0,sizeof(store));
    For(i,n) store[ans[i+1]]++;
    For(i,n) cout<<store[ans[i+1]]<<" ";
    return 0;
}