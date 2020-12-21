#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

lli sequence(lli n,lli x,lli k)
{
    if(x==k) return n;
    lli temp=n,mini=1e18,maxi=0;
    while(temp)
    {
        if(temp%10<mini) mini=temp%10;
        if(temp%10>maxi) maxi=temp%10;
        temp/=10;
    }
    if(mini==0) return n;
    return sequence(n + mini*maxi,x+1,k);
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        lli n,k;
        cin>>n>>k;
        cout<<sequence(n,1,k)<<endl;        
    }
    return 0;
}