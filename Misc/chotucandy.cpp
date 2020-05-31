#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

int main(){
    lli sum=0;
    int n,k;
    cin>>n>>k;
    vi ar(n),pr(n);
    For(i,n) cin>>ar[i];
    pr[0]=ar[0];
    for(int i=1;i<n;i++) pr[i]=pr[i-1]+ar[i];
    For(i,n) cout<<pr[i]<<" ";
    return 0;
}