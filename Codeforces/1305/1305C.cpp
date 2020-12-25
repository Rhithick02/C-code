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
    lli ans=1;
    int n,m;
    cin>>n>>m;
    vi ar(n);
    For(i,0,n) cin>>ar[i];
    if(n>m){
        cout<<0<<endl;
        exit(0);
    }
    For(i,0,n) For(j,i+1,n) ans=(ans%m*abs(ar[i]-ar[j])%m)%m;
    cout<<ans<<endl;
}