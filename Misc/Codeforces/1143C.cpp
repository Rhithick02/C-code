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
    int n,p,c;
    int root;
    set<int>te;
    cin>>n;
    vi ar[n+1];
    vi st(n+1);
    For(i,n)
    {
        cin>>p>>c;
        if(p!=-1) ar[p].pb(i+1);
        else root=i+1;
        st[i+1]=c;
    }
    queue<int> q;
    q.push(root);
    while(!q.empty())
    {
        int current=q.front();
        q.pop();
        int flag=0;
        if(!ar[current].size() && st[current]==1) te.insert(current);
        for(auto it: ar[current])
        {
            if(st[it]==1 && st[current]==1 && current!=root) flag++;
            if(flag==ar[current].size()) te.insert(current);
            q.push(it);
        }
    }
    if(!te.size()) cout<<-1;
    for(auto it: te) cout<<it<<" ";
    cout<<endl;
    return 0;
}