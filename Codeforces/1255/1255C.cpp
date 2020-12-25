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
    int n,pre,fut,te,pos=2;
    cin>>n;
    vector<bool> visited(n+1);
    vi st(n+1),ans(n),edge[n+1],inp(3);
    For(i,0,n-2){
        For(j,0,3) cin>>inp[j],st[inp[j]]++;
        For(j,0,3){
            edge[inp[j]].pb(inp[(j+1)%3]);
            edge[inp[(j+1)%3]].pb(inp[j]);
        }
    }
    For(i,1,n+1){
        if(st[i]==1){
            ans[0]=i;
            break;
        }
    }
    if(st[edge[ans[0]][0]]==2) ans[1]=edge[ans[0]][0];
    else ans[1]=edge[ans[0]][1];
    visited[ans[0]]=true,visited[ans[1]]=true;
    pre=ans[0],fut=ans[1];
    For(i,0,n-2){
        for(auto it: edge[pre]){
            if(visited[it]) continue;
            te=it;
        }
        ans[pos++]=te;
        visited[te]=true;
        pre=fut,fut=te;
    }
    for(auto it: ans) cout<<it<<" ";
    return 0;
}