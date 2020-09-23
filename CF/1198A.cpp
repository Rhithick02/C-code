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

int n,I,K=0;
int size(int K){
    return n*(int)(ceil(1.0*log2(K)));
}
int bsearch(){
    int low=0,high=K,mid;
    while(low<=high){
        mid=low+high>>1;
        if(size(mid)>I) high=mid-1;
        else low=mid+1;
    }
    if(size(mid+1)<=I) mid++;
    if(size(mid)>I) mid--;
    return mid;
}
void pref(vi &st, int n){
    For(i,1,n) st[i]=st[i]+st[i-1];
}
int main(){
    ios::sync_with_stdio(false);
    map<int,int> mp;
    cin>>n>>I;
    I*=8;
    vi ar(n);
    For(i,0,n){
        cin>>ar[i];
        mp[ar[i]]++;
        if(mp[ar[i]]==1) K++;
    }
    if(size(K)<=I) cout<<0<<"\n";
    else{
        vi st(1);
        int dis=bsearch(),val=1e9,cnt=0;
        for(auto it: mp) st.pb(it.se);
        pref(st,st.size());
        for(int i=0;i<=K-dis;i++) val=min(val,st[K]-st[dis+i]+st[i]);
        cout<<val<<"\n";
    }
    return 0;
}