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
    int n,q,que,x,p,cnt=0,maxi=0;
    cin>>n;
    set<int> te;
    vpa ar(n),st;
    For(i,0,n) cin>>ar[i].fi;
    cin>>q;
    For(i,0,q){
        cnt++;
        cin>>que;
        if(que==1){
            cin>>p>>x;
            ar[p-1].fi=x,ar[p-1].se=cnt;
            continue;
        }
        cin>>x;
        st.pb({cnt,x}),maxi=max(maxi,x);
    }
    for(int i=st.size()-1;i>=0;i--){
        te.insert(st[i].se);
        st[i].se=*te.rbegin();
    }
    For(i,0,n){
        if(!ar[i].se) cout<<max(ar[i].fi,maxi)<<" ";
        else{
            pa jgh={ar[i].se,0},temp={0,0};
            if(upper_bound(asc(st),jgh)!=st.end()) temp=*upper_bound(asc(st),jgh);
            cout<<max(ar[i].fi,temp.se)<<" ";
        }
    }
    return 0;
}