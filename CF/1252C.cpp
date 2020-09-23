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
    int n,q,x[2],y[2];
    cin>>n>>q;
    vpa row(n),col(n);
    For(i,0,n) cin>>row[i].fi,row[i].se=1;
    For(i,0,n) cin>>col[i].fi,col[i].se=1;
    For(i,1,n){
        if((row[i].fi&1)^(row[i-1].fi&1)) row[i].se=row[i-1].se+1;
        else row[i].se=row[i-1].se;
        if((col[i].fi&1)^(col[i-1].fi&1)) col[i].se=col[i-1].se+1;
        else col[i].se=col[i-1].se;
    }
    For(i,0,q){
        cin>>x[0]>>y[0]>>x[1]>>y[1];
        if(col[y[0]-1].se!=col[y[1]-1].se || row[x[0]-1].se!=row[x[1]-1].se)
            cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}