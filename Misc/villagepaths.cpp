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
void dfs(int v,bool visited[],vi ar[],int &count)
{
    visited[v]=true;
    count++;
    for(auto it: ar[v])
    {
        if(!visited[it])
            dfs(it,visited,ar,count);
    }
}

int main(){
    int n,p,x1,y1,x2,y2,sum=0,count=0;
    cin>>n>>p;
    vi ar[n*n+1];
    while(p--)
    {
        cin>>x1>>y1>>x2>>y2;
        ar[(x1-1)*n+y1].pb((x2-1)*n+y2);
        ar[(x2-1)*n+y2].pb((x1-1)*n+y1);
    }
    bool visited[n*n+1]={false};
    for(int i=1;i<=n*n;i++)
    {
        if(!visited[i])
        {
            dfs(i,visited,ar,count);
            sum+=count*(n*n-count);
            count=0;
        }
    }
    cout<<sum<<endl;
    return 0;
}