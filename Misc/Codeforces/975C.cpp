#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    lli n,q,tot=0;
    cin>>n>>q;
    vector<lli>ar(n),k(q),sum(n);
    For(i,n) cin>>ar[i];
    For(i,q) cin>>k[i];
    For(i,n)
    {
        tot+=ar[i];
        sum[i]=tot;
    }
    //For(i,n) cout<<sum[i]<<" ";
    cout<<endl;
    tot=0;
    For(i,q)
    {
        tot+=k[i];
        if(tot>=sum[n-1])
        {
            cout<<ar.size();
            tot=0;
        }
        else 
        {
            int pos=upper_bound(sum.begin(),sum.end(),tot)-sum.begin();
            cout<<n-pos;
        }
        cout<<endl;
    }
    return 0;
}