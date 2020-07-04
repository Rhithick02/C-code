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
    int n,k,res;
    set<pa> te;
    cin>>n>>k;
    vi ar(k),st(n+1);
    For(i,0,k) cin>>ar[i],st[ar[i]]++;
    res=(n-2)*3+4;
    For(i,0,k){
        if(st[ar[i]]>0) te.insert({ar[i],ar[i]});
        if(ar[i]!=n && ((st[ar[i]] && st[ar[i]+1]>0) || (!st[ar[i]] && st[ar[i+1]]>1))) te.insert({ar[i],ar[i]+1});
        if(ar[i]!=1 && ((st[ar[i]] && st[ar[i]-1]>0) || (!st[ar[i]] && st[ar[i+1]]>1))) te.insert({ar[i],ar[i]-1});
        st[ar[i]]--;
    }
    cout<<res-te.size()<<endl;
    return 0;
}
