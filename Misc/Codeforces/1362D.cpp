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

int main(){
    int m,n,u,v,flag=0;
    cin>>n>>m;
    vi ar[n+1],topic(n+1);
    vpa store(n);
    For(i,m)
    {
        cin>>u>>v;
        ar[u].pb(v);
        ar[v].pb(u);
    }
    For(i,n)
    {
        cin>>store[i].fi;
        store[i].se=i+1;
    }
    sort(asc(store));
    For(i,n)
    {
        set<int> te;
        // bool te[n+1]={false};
        // int count=0;
        for(auto it: ar[store[i].se])
        {
            if(!topic[it]) continue;
            if(topic[it]==store[i].fi) flag=-1;
            else //if(te[topic[it]]==0) count++,te[topic[it]]=1;
                te.insert(topic[it]);
        }
        if(flag==-1) break;
        if(te.size()!=store[i].fi-1)
        {
            flag=-1;
            break;
        }
        topic[store[i].se]=store[i].fi;
    }
    if(flag==-1) cout<<-1;
    else For(i,n) cout<<store[i].se<<" ";
    cout<<endl;
    return 0;
}
