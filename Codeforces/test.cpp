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
int n,x,fl,res;
vi ar[MAX],sum(MAX),a(MAX);
vector<bool> v(MAX);
int main(){
    ios::sync_with_stdio(false);
    int prev=0;
    cin>>n;
    For(i,0,n-1){
        cin>>x;
        ar[i+2].pb(x);
        ar[x].pb(i+2);
    }
    For(i,0,n) cin>>sum[i+1];
    a[1]=sum[1];
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int cur=q.front(),mini=2e9;
        v[cur]=true;
        q.pop();
        for(auto it: ar[cur]){
            if(v[it]) continue;
            if(sum[it]==-1) prev=sum[cur];
            if(sum[cur]==-1) mini=min(mini,sum[it]);
            q.push(it);
        }
        cout<<cur<<" "<<prev<<"\n";
        if(sum[cur]==-1){
            if(mini-prev<0){
               fl=1;
                break;
            }
            sum[cur]=(mini==2e9?prev:mini);
            a[cur]=sum[cur]-prev;
            for(auto it: ar[cur]){
                if(v[it]) continue;
                a[it]=sum[it]-mini;
            }
        }
    }
    if(fl) cout<<"-1\n";
    // else{
    //     For(i,0,n) cout<<a[i+1]<<" ";
    //     cout<<res<<"\n";
    // }
}


