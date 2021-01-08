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
#define mod 1000000007

int main(){
    lli prod=1;
    int h,w,flag=0;
    cin>>h>>w;
    vi r(h+1),c(w+1);
    For(i,h) cin>>r[i+1];
    For(i,w) cin>>c[i+1];
    for(int i=1;i<=h;i++)
    {
        int count=0;
        if(r[i]+1<=w && c[r[i]+1]>=i)
        {
            flag=1;
            break;
        }
        for(int j=1;j<=r[i];j++)
        {
            if(c[j]==i-1)
            {
                flag=1;
                break;
            }
        }
        for(int j=r[i]+2;j<=w;j++)
            if(c[j]<i-1) count++;
        while(count--)
        {
            prod*=2;
            prod%=mod;
        }
    }
    if(flag==1) cout<<"0\n";
    else cout<<prod<<endl;
    return 0;
}