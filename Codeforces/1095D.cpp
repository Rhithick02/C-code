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

int n,x,y,k=1;
vi ans(MAX),ar[MAX];
vector<bool> v(MAX);

void dfs(int st){
    v[st]=true;
    ans[k++]=st;
    for(auto it: ar[st]){
        if(v[it]) continue;
        v[ar[st][0]]=v[ar[st][1]]=true;
        if(ar[it][0]==ar[st][1] || ar[it][1]==ar[st][1]){
            ans[k++]=ar[st][0];
            dfs(ar[st][1]);
        }
        else{
            ans[k++]=ar[st][1];
            dfs(ar[st][0]);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    For(i,1,n+1){
        cin>>x>>y;
        ar[i].pb(x);
        ar[i].pb(y);
    }
    dfs(1);
    For(i,1,n+1) cout<<ans[i]<<" ";
    cout<<endl;
}