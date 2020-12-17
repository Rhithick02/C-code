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
    int n,ans=0,temp=1;
    cin>>n;
    vpa a(n),b(n);
    vi st;
    For(i,n) cin>>a[i].fi,a[i].se=i+1;
    For(i,n) cin>>b[i].fi,b[i].se=i+1;
    sort(asc(a));
    sort(asc(b));
    For(i,n)
    {
        int ind=lower_bound(asc(b),make_pair(a[i].fi,0))-b.begin();
        if(a[i].se>=b[ind].se) st.pb(a[i].se-b[ind].se);
        else st.pb(n-b[ind].se+a[i].se);
    }
    sort(asc(st));
    For(i,n-1)
    {
        if(st[i]==st[i+1]) temp++;
        else ans=max(ans,temp),temp=1;
    }
    ans=max(ans,temp);
    cout<<ans<<endl;
    return 0;
}