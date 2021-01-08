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
    int n;
    cin>>n;
    vi ar(n),ans(n);
    set<pal> te;
    For(i,0,n) cin>>ar[i];
    For(i,0,n)
    {
        lli sum=0;
        int mini=ar[i];
        for(int j=i;j>=0;j--) mini=min(ar[j],mini),sum+=mini;
        mini=ar[i];
        for(int j=i+1;j<n;j++) mini=min(ar[j],mini),sum+=mini;
        te.insert({sum,i});
    }
    int pos=(*te.rbegin()).se;
    ans[pos]=ar[pos];
    for(int i=pos-1;i>=0;i--) ans[i]=min(ans[i+1],ar[i]);
    for(int i=pos+1;i<n;i++) ans[i]=min(ans[i-1],ar[i]);
    for(auto it: ans) cout<<it<<" ";
    cout<<endl;
    return 0;
}