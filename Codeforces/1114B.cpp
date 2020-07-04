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

bool sortbyse(const pa &a,const pa &b){
    return a.se<b.se;
}

int main(){
    ios::sync_with_stdio(false);
    lli sum=0;
    int n,m,k,cnt=0;
    cin>>n>>m>>k;
    vpa ar(n),st;
    For(i,0,n) cin>>ar[i].fi,ar[i].se=i+1;
    sort(des(ar));
    For(i,0,m*k) sum+=ar[i].fi,st.pb(ar[i]);
    sort(asc(st),sortbyse);
    cout<<sum<<"\n";
    For(i,0,m*(k-1)){
        cnt++;
        if(cnt==m) cout<<st[i].se<<" ",cnt=0;
    }
    cout<<"\n";
    return 0;
}