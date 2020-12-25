#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    int n,l,r,x,count=0;
    cin>>n>>l>>r>>x;
    vi ar(n);
    For(i,n) cin>>ar[i];
    For(i,(1<<n))
    {
        int k=0,max=0,min=1e7;
        lli sum=0;
        for(int j=i;j>0;j=j>>1)
        {
            if(j&1) 
            {
                sum+=ar[k];
                if(ar[k]<min) min=ar[k];
                if(ar[k]>max) max=ar[k];
            }
            k++;
        }
        if(sum>=l && sum<=r && max-min>=x) count++;
    }
    cout<<count<<endl;
    return 0;
}