#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    lli sum=0;
    lli n,maxi;
    cin>>n;
    vi ar(n),st(100001);
    For(i,n) cin>>ar[i],st[ar[i]]++;
    maxi=*max_element(ar.begin(),ar.end());
    for(lli i=maxi;i>1;i--)
    {
        if(!st[i]) continue;
        if((i-1)*st[i-1]>i*st[i]+(i-2)*(st[i-2]))
        {
            sum+=(i-1)*st[i-1];            
            st[i-2]=0,st[i]=0,st[i-1]=0;
        }
        else
        {
            sum+=i*st[i];
            st[i-1]=0;
        }        
    }
    if(!st[2]) sum+=st[1];
    cout<<sum<<endl;
    return 0;
}