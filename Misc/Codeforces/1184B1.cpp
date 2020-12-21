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
    lli s,d;
    cin>>s>>d;
    vil ar(s);
    For(i,s) cin>>ar[i];
    vpal st(d);
    For(i,d) cin>>st[i].fi>>st[i].se;
    sort(asc(st));
    for(int i=1;i<d;i++) st[i].se+=st[i-1].se;
    For(i,s) 
    {
        int ind=upper_bound(asc(st),make_pair(ar[i],1LL<<40))-st.begin()-1;
        if(ind<0) cout<<0<<" ";
        else cout<<st[ind].se<<" ";
    }
    return 0;
}