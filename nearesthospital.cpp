#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

void bfs(vi ar[],int start,int tot,vi hos)
{
    bool visited[tot]={false};
    queue<int> q;
    vector< pair<int,int> > st(hos.size());
    vi lvl(tot);
    int k=0;
    q.push(start);
    visited[start]=true;
    while(!q.empty())
    {
        int current=q.front();
        q.pop();
        for(auto it: ar[current])
        {
            if(visited[it]) continue;
            visited[it]=true;
            q.push(it);
            lvl[it]=lvl[current]+1;
            if(find(hos.begin(),hos.end(),it)!=hos.end())
            {
                st[k].fi=lvl[it];
                st[k].se=it;
                k++;
            }
        }
    }
    sort(asc(st));
    cout<<st[0].se;
}
int main(){
    int n,u,v,q;
    cin>>n;
    vi ar[n+1];
    For(i,n-1)
    {
        cin>>u>>v;
        ar[u].pb(v);
        ar[v].pb(u);
    }
    cin>>q;
    vi hos(q);
    For(i,q) cin>>hos[i];
    bfs(ar,1,n+1,hos);
    return 0;
}