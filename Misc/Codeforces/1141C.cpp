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
    int n;
    lli mini=0;
    set<int> te;
    cin>>n;
    vil ar(n-1),pref(n);
    For(i,0,n-1) cin>>ar[i],pref[i+1]=pref[i]+ar[i],mini=min(mini,pref[i+1]);
    int x=1-mini;
    te.insert(x);
    For(i,1,n) te.insert(x+pref[i]);
    if(te.size()!=n || *te.rbegin()>n) cout<<-1;
    else{
        cout<<x<<" ";
        For(i,1,n) cout<<x+pref[i]<<" ";
    }
    cout<<endl;
}