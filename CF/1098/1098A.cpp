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
lli n,x,fl,res=0;
vil ar[MAX],sum(MAX);
vector<bool> v(MAX);
void dfs(int node){
    v[node]=true;
    for(auto it: ar[node]){
        if(v[it]) continue;
        if(ar[it].size()==1 && sum[it]==-1) sum[it]=sum[node];
        else if(sum[it]==-1){
            lli mini=2e15;
            for(auto ti:ar[it]) if(!v[ti]) mini=min(mini,sum[ti]);
            sum[it]=mini;
        }
        dfs(it);
    }
}
void dfs2(int node){
    v[node]=true;
    for(auto it: ar[node]){
        if(v[it]) continue;
        dfs2(it);
        sum[it]-=sum[node];
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    For(i,0,n-1){
        cin>>x;
        ar[i+2].pb(x);
        ar[x].pb(i+2);
    }
    For(i,1,n+1) cin>>sum[i];
    dfs(1);
    For(i,0,MAX) v[i]=false;
    dfs2(1);
    For(i,1,n+1){
        res+=sum[i];
        if(sum[i]<0) fl=1;
    }
    if(fl) cout<<"-1\n";
    else cout<<res<<"\n";
}