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
    int n,u,v,count=0;
    cin>>n;
    vpa ar[n+1];
    vi ans(n-1,-1);
    For(i,0,n-1)
    {
        cin>>u>>v;
        ar[u].pb({v,i});
        ar[v].pb({u,i});
    }
    For(i,1,n)
    {
        if(ar[i].size()<=2) continue;
        for(auto it: ar[i]) if(count<3) ans[it.se]=count++;
        break;
    }
    For(i,1,n) for(auto it: ar[i]) if(ans[it.se]==-1) ans[it.se]=count++;
    For(i,0,n-1) cout<<ans[i]<<endl;
    return 0;
}