#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

int main(){
    int n,m,count=0,store=0;
    cin>>n>>m;
    vector< pair<int,double> > ar(n);
    vi st(n),I(n+1);
    For(i,n) cin>>ar[i].fi>>ar[i].se;
    I[0]=-1;
    for(int i=1;i<=n;i++) I[i]=1e9;
    for(int i=0;i<n;i++)
    {
        int low,high,mid;
        low=0;
        high=n;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(I[mid]<=ar[i].fi) low=mid+1;
            else high=mid-1;
        }
        I[low]=ar[i].fi;
        if(store<low)
            store=low;
    }
    cout<<n-store;
    return 0;
}