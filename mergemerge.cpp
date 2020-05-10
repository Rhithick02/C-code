#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    lli n,count=1,ma;
    cin>>n;
    vector< pair<lli,lli> > ar(n);
    For(i,n) cin>>ar[i].first>>ar[i].second;
    sort(ar.begin(),ar.end());
    ma=ar[0].second;
    for(int i=0;i<n-1;i++)
    {
        if(ma<ar[i+1].first)
            count++;
        ma=max(ma,ar[i+1].second);
    }
    cout<<count<<endl;
    return 0;
}