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

bool sortbysec(const pa &a,const pa &b){
    return a.se<b.se;
}

int main(){
    ios::sync_with_stdio(false);
    int n,m,k,pos;
    cin>>n;
    vpa ar(n);
    For(i,0,n) cin>>ar[i].fi,ar[i].se=-i;
    sort(des(ar));
    cin>>m;
    For(i,0,m){
        cin>>k>>pos;
        vpa ans;
        For(j,0,k) ans.pb({ar[j].fi,-ar[j].se});
        sort(asc(ans),sortbysec);
        cout<<ans[pos-1].fi<<"\n";
    }
    return 0;
}