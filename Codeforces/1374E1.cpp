#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pa pair<int,int>
#define pal pair<long long,long long>
#define vpa vector<pair<int,int>>
#define vpal vector<pair<long long,long long>>
#define pb push_back
#define fi first
#define se second

int main(){
    ios::sync_with_stdio(false);
    lli res=0;
    int n,k,t,a,b,alice=0;
    cin>>n>>k;
    deque<lli> st[3];
    For(i,0,n){
        cin>>t>>a>>b;
        if(a && b) st[2].pb(t);
        else if(a) st[0].pb(t);
        else if(b) st[1].pb(t);
    }
    if(st[0].size()+st[2].size()<k || st[1].size()+st[2].size()<k){
        cout<<-1<<endl;
        exit(0);
    }
    For(i,0,3) sort(asc(st[i]));
    For(i,0,3) st[i].pb(2e10);
    while(alice!=k){
        alice++;
        if(st[2][0]<=st[1][0]+st[0][0]) res+=st[2][0],st[2].pop_front();
        else res+=st[1][0]+st[0][0],st[1].pop_front(),st[0].pop_front();
    }
    cout<<res<<endl;
    return 0;
}