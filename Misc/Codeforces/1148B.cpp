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
    lli n,m,ta,tb,k,sum[2]={0},res=0;
    cin>>n>>m>>ta>>tb>>k;
    vil a(n),b(m),st(k+1);
    For(i,0,n) cin>>a[i];
    For(i,0,m) cin>>b[i];
    if(k>=min(n,m) || a[k]+ta>b[m-1] || b[m-k-1]<a[0]+ta){
        cout<<"-1\n";
        exit(0);
    }
    For(i,0,k+1){
        int pos=lower_bound(asc(b),a[i]+ta)-b.begin();
        st[i]=m-pos-(k-i);
    }
    sort(asc(st));
    cout<<b[m-st[0]]+tb<<"\n";
}