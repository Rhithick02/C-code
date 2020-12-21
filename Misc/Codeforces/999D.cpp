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
#define MAX 200001
lli n,m,cnt=0,te;
map<lli,lli> mp;
set<lli> st;
vi ar(MAX);
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    For(i,0,n){
        cin>>ar[i];
        mp[ar[i]%m]++;
    }
    For(i,0,m){
        if(mp[i]<n/m)
            st.insert(i);
    }
    for(int i=0;i<n && st.size();i++){
        if(mp[ar[i]%m]<=n/m) continue;
        auto it=st.lower_bound(ar[i]%m);
        if(it!=st.end()) 
            te=*it-ar[i]%m;
        else 
            te=*st.begin()+m-ar[i]%m;
        mp[ar[i]%m]--;
        mp[(ar[i]+te)%m]++;
        ar[i]+=te,cnt+=te;
        if(mp[ar[i]%m]==n/m) 
            st.erase((it!=st.end()?it:st.begin()));
    }
    cout<<cnt<<"\n";
    For(i,0,n) cout<<ar[i]<<" ";
}