#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

int main(){
    int n;
    lli col=0,count=0,temp=1;
    cin>>n;
    vector< pair<int,int> >ar(n);
    vi x(n),y(n);
    For(i,n) cin>>ar[i].fi>>ar[i].se,x[i]=ar[i].fi,y[i]=ar[i].se;
    sort(ar.begin(),ar.end());
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    For(i,n-1) 
    {
        if(ar[i]==ar[i+1]) temp++;
        else col+=(temp*(temp-1))/2,temp=1;
    }
    if(temp!=1) col+=(temp*(temp-1))/2,temp=1;
    For(i,n-1)
    {
        if(x[i]==x[i+1]) temp++;
        else count+=(temp*(temp-1))/2,temp=1;
    }
    if(temp!=1) count+=(temp*(temp-1))/2,temp=1;
    For(i,n-1)
    {
        if(y[i]==y[i+1]) temp++;
        else count+=(temp*(temp-1))/2,temp=1;
    }
    if(temp!=1) count+=(temp*(temp-1))/2;
    cout<<count-col;
}